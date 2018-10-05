/*
 * Author: Josue Galeas
 * Last Edit: 2018.10.05
 */

import java.awt.Dimension;
import java.awt.GridLayout;
import java.util.HashMap;
import javax.swing.JPanel;

@SuppressWarnings("serial")
public class Board extends JPanel
{
	public ChessBoard chessBoard;
	private ChessPanel[][] chessPanels;
	private HashMap<String, String> symbolMap;
	private String an = "EMPTY";
	private boolean click = false;
	private char turn = 'W';
	private int init[] = {-1, -1};
	private int fin[] = {-1, -1};

	public Board()
	{
		setLayout(new GridLayout(8, 8));
		setPreferredSize(new Dimension(500, 500));
		setBackground(Settings.borderColor);

		chessPanels = new ChessPanel[8][8];
		for (int x = 0; x < 8; x++)
		{
			for (int y = 0; y < 8; y++)
			{
				chessPanels[x][y] = new ChessPanel(x, y);
				setTile(x, y);
				add(chessPanels[x][y]);
			}
		}

		symbolMap = new HashMap<String, String>();
		symbolMap.put("WP", "♙");
		symbolMap.put("WN", "♘");
		symbolMap.put("WB", "♗");
		symbolMap.put("WR", "♖");
		symbolMap.put("WQ", "♕");
		symbolMap.put("WK", "♔");
		symbolMap.put("BP", "♟");
		symbolMap.put("BN", "♞");
		symbolMap.put("BB", "♝");
		symbolMap.put("BR", "♜");
		symbolMap.put("BQ", "♛");
		symbolMap.put("BK", "♚");

		createBoard();
		updateBoard();
		ChessPanel.board = this;
	}
	static
	{
		System.loadLibrary("JNI");
	}

	public native void createBoard();
	public native void deleteBoard();
	public native char getColor(int x, int y);
	public native char getType(int x, int y);
	public native boolean getCheckmate();
	public native boolean verifyMove(int i[], int f[]);

	public void setLabel(int x, int y)
	{
		Character color = getColor(x, y);
		Character type = getType(x, y);
		var piece = color.toString() + type.toString();

		if (piece.equals("EE"))
			chessPanels[x][y].setLabel("");
		else
		{
			if (symbolMap.get(piece) != null)
				chessPanels[x][y].setLabel(symbolMap.get(piece));
			else
				chessPanels[x][y].setLabel("ERROR");
		}
	}

	public void setTile(int x, int y)
	{
		int tile = (x * 8) + y + (x % 2);

		if (tile % 2 == 0)
			chessPanels[x][y].setBackground(Settings.lightTile);
		else
			chessPanels[x][y].setBackground(Settings.darkTile);
	}

	public void setInitFin()
	{
		init[0] = init[1] = -1;
		fin[0] = fin[1] = -1;
	}

	public void updateSideBar()
	{
		chessBoard.sideBar.updateTextBox(an, turn);
		an = "CLEARED";
	}

	public void updateBoard()
	{
		for (int i = 0; i < 8; i++)
			for (int j = 0; j < 8; j++)
				setLabel(i, j);
	}

	public char nextColor(char col)
	{
		switch (col)
		{
			case 'W':
				chessBoard.messageBox.setMessage("Black's Turn");
				return 'B';
			case 'B':
				chessBoard.messageBox.setMessage("White's Turn");
				return 'W';
			default:
				chessBoard.messageBox.setMessage("ERROR");
				return 'E';
		}
	}

	public void newGame()
	{
		deleteBoard();
		createBoard();
		updateBoard();

		if (click)
			setTile(init[0], init[1]);

		an = "EMPTY";
		click = false;
		turn = 'W';
		setInitFin();

		chessBoard.messageBox.setMessage("White's Turn");
		repaint();
	}

	public void processClick(int x, int y)
	{
		if (chessBoard.messageBox.getWaiting())
			return;

		if (getCheckmate())
			return;

		if (!click)
		{
			char color = getColor(x, y);

			if (color == 'E')
				return;
			else if (color == turn)
			{
				init[0] = x;
				init[1] = y;
				click = true;
				chessPanels[x][y].setBackground(Settings.highlightTile);
			}
			else
				chessBoard.messageBox.setTempMessage("Not your piece!", Settings.delay);
		}
		else
		{
			fin[0] = x;
			fin[1] = y;
			click = false;

			boolean move = verifyMove(init, fin);
			setTile(init[0], init[1]);
			setInitFin();

			if (move)
			{
				updateBoard();
				updateSideBar();

				if (getCheckmate())
				{
					if (turn == 'W')
						chessBoard.messageBox.setMessage("White wins!");
					else if (turn == 'B')
						chessBoard.messageBox.setMessage("Black wins!");
					else
						chessBoard.messageBox.setMessage("ERROR");
				}
				else
					turn = nextColor(turn);
			}
			else
				chessBoard.messageBox.setTempMessage("Not a valid move!", Settings.delay);
		}
	}
}
