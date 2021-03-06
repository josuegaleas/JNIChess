/*
 * Author: Josue Galeas
 * Last Edit: 2018.08.12
 */

import java.awt.Dimension;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;

@SuppressWarnings("serial")
public class SideBar extends JPanel
{
	private static Board board;
	private static MessageBox messageBox;
	private JTextArea textBox;
	private int progress = 1;

	public SideBar()
	{
		setLayout(new GridLayout(2, 1));
		setPreferredSize(new Dimension(120, 570));

		textBox = new JTextArea();
		textBox.setEditable(false);

		add(new ButtonPanel());
		add(new JScrollPane(textBox));
	}

	public static void setBoard(Board b) {board = b;}

	public static void setMessageBox(MessageBox mb) {messageBox = mb;}

	public void updateTextBox(String an, char col)
	{
		String box = an;
		if (col == 'B')
			progress++;

		if (col == 'W')
			box = textBox.getText() + progress + ". " + an + " ";
		else if (col == 'B')
			box = textBox.getText() + an + "\n";
		else
			box = "ERROR";

		textBox.setText(box);
	}

	private class ButtonPanel extends JPanel implements ActionListener
	{
		private JButton[] buttons = new JButton[5];

		public ButtonPanel()
		{
			setLayout(new GridLayout(5, 1));

			buttons[0] = new JButton("New Game");
			buttons[1] = new JButton("Save Game");
			buttons[2] = new JButton("Load Game");
			buttons[3] = new JButton("Undo");
			buttons[4] = new JButton("Settings");

			for (JButton b : buttons)
			{
				b.addActionListener(this);
				add(b);
			}

			// TODO: Temporarily Disabled
			buttons[1].setEnabled(false);
			buttons[2].setEnabled(false);
			buttons[3].setEnabled(false);
			buttons[4].setEnabled(false);
		}

		@Override
		public void actionPerformed(ActionEvent e)
		{
			if (messageBox.getWaiting())
				return;

			var source = e.getSource();

			if (source == buttons[0])
			{
				board.newGame();
				textBox.setText("");
				progress = 1;
			}
			else if (source == buttons[1])
			{

			}
			else if (source == buttons[2])
			{

			}
			else if (source == buttons[3])
			{

			}
			else if (source == buttons[4])
			{

			}
		}
	}
}
