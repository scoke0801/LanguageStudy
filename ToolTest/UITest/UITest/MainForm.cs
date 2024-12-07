namespace UITest
{
    public partial class MainForm : Form
    {
        private Button currentButton;
        private Random random;
        private int tempIndex;


        public MainForm()
        {
            InitializeComponent();

            random = new Random();
        }

        private Color SelectThemeColor()
        {
            int index = random.Next(ThemeColor.ColorList.Count);
            while(tempIndex == index)
            {
                index = random.Next(ThemeColor.ColorList.Count);
            }
            tempIndex = index;

            return ColorTranslator.FromHtml(ThemeColor.ColorList[index]);
        }

        private void ActivateButton(object buttonSender)
        {
            if(null != buttonSender )
            {
                if(currentButton != (Button)buttonSender)
                {
                    DisableButton();

                    Color color = SelectThemeColor();
                    currentButton = (Button)buttonSender;
                    currentButton.BackColor = color;
                    currentButton.ForeColor = Color.White;
                    currentButton.Font = new System.Drawing.Font("¸¼Àº °íµñ", 12.5F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
                }
            }

        }

        private void DisableButton()
        {
            foreach(Control prevButton in menuPanel.Controls)
            {
                if(prevButton.GetType() == typeof(Button))
                {
                    prevButton.BackColor = Color.FromArgb(50, 52, 77);
                    prevButton.ForeColor = Color.Gainsboro;
                    prevButton.Font = new System.Drawing.Font("¸¼Àº °íµñ", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
                }
            }
        }

        private void FolderButton_Click(object sender, EventArgs e)
        {
            ActivateButton(sender);
        }

        private void FileButton_Click(object sender, EventArgs e)
        {
            ActivateButton(sender);
        }

        private void EditButton_Click(object sender, EventArgs e)
        {
            ActivateButton(sender);
        }

        private void SvnButton_Click(object sender, EventArgs e)
        {
            ActivateButton(sender);
        }

        private void PurgeButton_Click(object sender, EventArgs e)
        {
            ActivateButton(sender);
        }

        private void AccountButton_Click(object sender, EventArgs e)
        {
            ActivateButton(sender);
        }

        private void SettingButton_Click(object sender, EventArgs e)
        {
            ActivateButton(sender);
        }
    }
}