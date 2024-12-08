namespace UITest.SubForms
{
    partial class FolderListForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.FolderListLabel = new System.Windows.Forms.Label();
            this.LoadButton = new System.Windows.Forms.Button();
            this.fileList = new System.Windows.Forms.ListBox();
            this.folderPathLabel = new System.Windows.Forms.Label();
            this.saveButton = new System.Windows.Forms.Button();
            this.previewTitleLabel = new System.Windows.Forms.Label();
            this.previewPanel = new System.Windows.Forms.Panel();
            this.previewTextBox = new System.Windows.Forms.TextBox();
            this.fileSelectButton = new System.Windows.Forms.Button();
            this.previewPanel.SuspendLayout();
            this.SuspendLayout();
            // 
            // FolderListLabel
            // 
            this.FolderListLabel.AutoSize = true;
            this.FolderListLabel.Font = new System.Drawing.Font("맑은 고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.FolderListLabel.Location = new System.Drawing.Point(12, 9);
            this.FolderListLabel.Name = "FolderListLabel";
            this.FolderListLabel.Size = new System.Drawing.Size(78, 19);
            this.FolderListLabel.TabIndex = 0;
            this.FolderListLabel.Text = "선택 경로 :";
            // 
            // LoadButton
            // 
            this.LoadButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.LoadButton.Font = new System.Drawing.Font("맑은 고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.LoadButton.Location = new System.Drawing.Point(359, 446);
            this.LoadButton.Name = "LoadButton";
            this.LoadButton.Size = new System.Drawing.Size(75, 33);
            this.LoadButton.TabIndex = 2;
            this.LoadButton.Text = "불러오기";
            this.LoadButton.UseVisualStyleBackColor = true;
            this.LoadButton.Click += new System.EventHandler(this.LoadButton_Click);
            // 
            // fileList
            // 
            this.fileList.FormattingEnabled = true;
            this.fileList.HorizontalScrollbar = true;
            this.fileList.ItemHeight = 15;
            this.fileList.Location = new System.Drawing.Point(12, 31);
            this.fileList.Name = "fileList";
            this.fileList.Size = new System.Drawing.Size(422, 409);
            this.fileList.TabIndex = 3;
            this.fileList.SelectedIndexChanged += new System.EventHandler(this.fileList_SelectedIndexChanged);
            // 
            // folderPathLabel
            // 
            this.folderPathLabel.AutoSize = true;
            this.folderPathLabel.Font = new System.Drawing.Font("맑은 고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.folderPathLabel.Location = new System.Drawing.Point(96, 9);
            this.folderPathLabel.Name = "folderPathLabel";
            this.folderPathLabel.Size = new System.Drawing.Size(192, 19);
            this.folderPathLabel.TabIndex = 4;
            this.folderPathLabel.Text = "현재 선택된 경로가 없습니다";
            // 
            // saveButton
            // 
            this.saveButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.saveButton.Font = new System.Drawing.Font("맑은 고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.saveButton.Location = new System.Drawing.Point(817, 446);
            this.saveButton.Name = "saveButton";
            this.saveButton.Size = new System.Drawing.Size(75, 33);
            this.saveButton.TabIndex = 5;
            this.saveButton.Text = "저장";
            this.saveButton.UseVisualStyleBackColor = true;
            this.saveButton.Click += new System.EventHandler(this.saveButton_Click);
            // 
            // previewTitleLabel
            // 
            this.previewTitleLabel.AutoSize = true;
            this.previewTitleLabel.Font = new System.Drawing.Font("맑은 고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.previewTitleLabel.Location = new System.Drawing.Point(450, 9);
            this.previewTitleLabel.Name = "previewTitleLabel";
            this.previewTitleLabel.Size = new System.Drawing.Size(65, 19);
            this.previewTitleLabel.TabIndex = 6;
            this.previewTitleLabel.Text = "미리보기";
            // 
            // previewPanel
            // 
            this.previewPanel.BackColor = System.Drawing.Color.Silver;
            this.previewPanel.Controls.Add(this.previewTextBox);
            this.previewPanel.Location = new System.Drawing.Point(450, 31);
            this.previewPanel.Name = "previewPanel";
            this.previewPanel.Size = new System.Drawing.Size(442, 409);
            this.previewPanel.TabIndex = 8;
            // 
            // previewTextBox
            // 
            this.previewTextBox.Dock = System.Windows.Forms.DockStyle.Fill;
            this.previewTextBox.Location = new System.Drawing.Point(0, 0);
            this.previewTextBox.Multiline = true;
            this.previewTextBox.Name = "previewTextBox";
            this.previewTextBox.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.previewTextBox.Size = new System.Drawing.Size(442, 409);
            this.previewTextBox.TabIndex = 0;
            // 
            // fileSelectButton
            // 
            this.fileSelectButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.fileSelectButton.Font = new System.Drawing.Font("맑은 고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.fileSelectButton.Location = new System.Drawing.Point(736, 446);
            this.fileSelectButton.Name = "fileSelectButton";
            this.fileSelectButton.Size = new System.Drawing.Size(75, 33);
            this.fileSelectButton.TabIndex = 9;
            this.fileSelectButton.Text = "파일선택";
            this.fileSelectButton.UseVisualStyleBackColor = true;
            this.fileSelectButton.Click += new System.EventHandler(this.fileSelectButton_Click);
            // 
            // FolderListForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(904, 481);
            this.Controls.Add(this.fileSelectButton);
            this.Controls.Add(this.previewPanel);
            this.Controls.Add(this.previewTitleLabel);
            this.Controls.Add(this.saveButton);
            this.Controls.Add(this.folderPathLabel);
            this.Controls.Add(this.fileList);
            this.Controls.Add(this.LoadButton);
            this.Controls.Add(this.FolderListLabel);
            this.Name = "FolderListForm";
            this.Text = "FolderListForm";
            this.Load += new System.EventHandler(this.FolderListForm_Load);
            this.previewPanel.ResumeLayout(false);
            this.previewPanel.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private Label FolderListLabel;
        private Button LoadButton;
        private ListBox fileList;
        private Label folderPathLabel;
        private Button saveButton;
        private Label previewTitleLabel;
        private Panel previewPanel;
        private TextBox previewTextBox;
        private Button fileSelectButton;
    }
}