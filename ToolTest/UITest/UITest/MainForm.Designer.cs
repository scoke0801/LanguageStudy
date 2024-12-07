namespace UITest
{
    partial class MainForm
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.menuPanel = new System.Windows.Forms.Panel();
            this.optionButton = new System.Windows.Forms.Button();
            this.accoutButton = new System.Windows.Forms.Button();
            this.purgeButton = new System.Windows.Forms.Button();
            this.svnButton = new System.Windows.Forms.Button();
            this.editButton = new System.Windows.Forms.Button();
            this.fileButton = new System.Windows.Forms.Button();
            this.folderButton = new System.Windows.Forms.Button();
            this.menuIconPanel = new System.Windows.Forms.Panel();
            this.menuButton = new System.Windows.Forms.Button();
            this.TitleBarPanel = new System.Windows.Forms.Panel();
            this.closeButton = new System.Windows.Forms.Button();
            this.menuPanel.SuspendLayout();
            this.menuIconPanel.SuspendLayout();
            this.TitleBarPanel.SuspendLayout();
            this.SuspendLayout();
            // 
            // menuPanel
            // 
            this.menuPanel.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(50)))), ((int)(((byte)(52)))), ((int)(((byte)(77)))));
            this.menuPanel.Controls.Add(this.optionButton);
            this.menuPanel.Controls.Add(this.accoutButton);
            this.menuPanel.Controls.Add(this.purgeButton);
            this.menuPanel.Controls.Add(this.svnButton);
            this.menuPanel.Controls.Add(this.editButton);
            this.menuPanel.Controls.Add(this.fileButton);
            this.menuPanel.Controls.Add(this.folderButton);
            this.menuPanel.Controls.Add(this.menuIconPanel);
            this.menuPanel.Dock = System.Windows.Forms.DockStyle.Left;
            this.menuPanel.Location = new System.Drawing.Point(0, 0);
            this.menuPanel.Margin = new System.Windows.Forms.Padding(0);
            this.menuPanel.Name = "menuPanel";
            this.menuPanel.Size = new System.Drawing.Size(150, 568);
            this.menuPanel.TabIndex = 0;
            // 
            // optionButton
            // 
            this.optionButton.Cursor = System.Windows.Forms.Cursors.IBeam;
            this.optionButton.Dock = System.Windows.Forms.DockStyle.Top;
            this.optionButton.FlatAppearance.BorderSize = 0;
            this.optionButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.optionButton.Font = new System.Drawing.Font("맑은 고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.optionButton.ForeColor = System.Drawing.Color.Gainsboro;
            this.optionButton.Image = global::UITest.Properties.Resources.Setting;
            this.optionButton.ImageAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.optionButton.Location = new System.Drawing.Point(0, 328);
            this.optionButton.Name = "optionButton";
            this.optionButton.Padding = new System.Windows.Forms.Padding(12, 0, 0, 0);
            this.optionButton.Size = new System.Drawing.Size(150, 48);
            this.optionButton.TabIndex = 8;
            this.optionButton.Tag = "　옵션";
            this.optionButton.Text = "　옵션";
            this.optionButton.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.optionButton.TextImageRelation = System.Windows.Forms.TextImageRelation.ImageBeforeText;
            this.optionButton.UseVisualStyleBackColor = true;
            this.optionButton.Click += new System.EventHandler(this.SettingButton_Click);
            // 
            // accoutButton
            // 
            this.accoutButton.Cursor = System.Windows.Forms.Cursors.IBeam;
            this.accoutButton.Dock = System.Windows.Forms.DockStyle.Top;
            this.accoutButton.FlatAppearance.BorderSize = 0;
            this.accoutButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.accoutButton.Font = new System.Drawing.Font("맑은 고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.accoutButton.ForeColor = System.Drawing.Color.Gainsboro;
            this.accoutButton.Image = global::UITest.Properties.Resources.Account1;
            this.accoutButton.ImageAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.accoutButton.Location = new System.Drawing.Point(0, 280);
            this.accoutButton.Name = "accoutButton";
            this.accoutButton.Padding = new System.Windows.Forms.Padding(12, 0, 0, 0);
            this.accoutButton.Size = new System.Drawing.Size(150, 48);
            this.accoutButton.TabIndex = 7;
            this.accoutButton.Tag = "　계정";
            this.accoutButton.Text = "　계정";
            this.accoutButton.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.accoutButton.TextImageRelation = System.Windows.Forms.TextImageRelation.ImageBeforeText;
            this.accoutButton.UseVisualStyleBackColor = true;
            this.accoutButton.Click += new System.EventHandler(this.AccountButton_Click);
            // 
            // purgeButton
            // 
            this.purgeButton.Cursor = System.Windows.Forms.Cursors.IBeam;
            this.purgeButton.Dock = System.Windows.Forms.DockStyle.Top;
            this.purgeButton.FlatAppearance.BorderSize = 0;
            this.purgeButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.purgeButton.Font = new System.Drawing.Font("맑은 고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.purgeButton.ForeColor = System.Drawing.Color.Gainsboro;
            this.purgeButton.Image = global::UITest.Properties.Resources.CDN;
            this.purgeButton.ImageAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.purgeButton.Location = new System.Drawing.Point(0, 232);
            this.purgeButton.Name = "purgeButton";
            this.purgeButton.Padding = new System.Windows.Forms.Padding(12, 0, 0, 0);
            this.purgeButton.Size = new System.Drawing.Size(150, 48);
            this.purgeButton.TabIndex = 5;
            this.purgeButton.Tag = "　퍼징";
            this.purgeButton.Text = "　퍼징";
            this.purgeButton.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.purgeButton.TextImageRelation = System.Windows.Forms.TextImageRelation.ImageBeforeText;
            this.purgeButton.UseVisualStyleBackColor = true;
            this.purgeButton.Click += new System.EventHandler(this.PurgeButton_Click);
            // 
            // svnButton
            // 
            this.svnButton.Cursor = System.Windows.Forms.Cursors.IBeam;
            this.svnButton.Dock = System.Windows.Forms.DockStyle.Top;
            this.svnButton.FlatAppearance.BorderSize = 0;
            this.svnButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.svnButton.Font = new System.Drawing.Font("맑은 고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.svnButton.ForeColor = System.Drawing.Color.Gainsboro;
            this.svnButton.Image = global::UITest.Properties.Resources.SVN;
            this.svnButton.ImageAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.svnButton.Location = new System.Drawing.Point(0, 184);
            this.svnButton.Name = "svnButton";
            this.svnButton.Padding = new System.Windows.Forms.Padding(12, 0, 0, 0);
            this.svnButton.Size = new System.Drawing.Size(150, 48);
            this.svnButton.TabIndex = 4;
            this.svnButton.Tag = "　SVN";
            this.svnButton.Text = "　SVN";
            this.svnButton.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.svnButton.TextImageRelation = System.Windows.Forms.TextImageRelation.ImageBeforeText;
            this.svnButton.UseVisualStyleBackColor = true;
            this.svnButton.Click += new System.EventHandler(this.SvnButton_Click);
            // 
            // editButton
            // 
            this.editButton.Cursor = System.Windows.Forms.Cursors.IBeam;
            this.editButton.Dock = System.Windows.Forms.DockStyle.Top;
            this.editButton.FlatAppearance.BorderSize = 0;
            this.editButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.editButton.Font = new System.Drawing.Font("맑은 고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.editButton.ForeColor = System.Drawing.Color.Gainsboro;
            this.editButton.Image = global::UITest.Properties.Resources.Edit;
            this.editButton.ImageAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.editButton.Location = new System.Drawing.Point(0, 136);
            this.editButton.Name = "editButton";
            this.editButton.Padding = new System.Windows.Forms.Padding(12, 0, 0, 0);
            this.editButton.Size = new System.Drawing.Size(150, 48);
            this.editButton.TabIndex = 3;
            this.editButton.Tag = "　편집";
            this.editButton.Text = "　편집";
            this.editButton.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.editButton.TextImageRelation = System.Windows.Forms.TextImageRelation.ImageBeforeText;
            this.editButton.UseVisualStyleBackColor = true;
            this.editButton.Click += new System.EventHandler(this.EditButton_Click);
            // 
            // fileButton
            // 
            this.fileButton.Cursor = System.Windows.Forms.Cursors.IBeam;
            this.fileButton.Dock = System.Windows.Forms.DockStyle.Top;
            this.fileButton.FlatAppearance.BorderSize = 0;
            this.fileButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.fileButton.Font = new System.Drawing.Font("맑은 고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.fileButton.ForeColor = System.Drawing.Color.Gainsboro;
            this.fileButton.Image = global::UITest.Properties.Resources.File;
            this.fileButton.ImageAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.fileButton.Location = new System.Drawing.Point(0, 88);
            this.fileButton.Name = "fileButton";
            this.fileButton.Padding = new System.Windows.Forms.Padding(12, 0, 0, 0);
            this.fileButton.Size = new System.Drawing.Size(150, 48);
            this.fileButton.TabIndex = 2;
            this.fileButton.Tag = "　파일 목록";
            this.fileButton.Text = "　파일 목록";
            this.fileButton.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.fileButton.TextImageRelation = System.Windows.Forms.TextImageRelation.ImageBeforeText;
            this.fileButton.UseVisualStyleBackColor = true;
            this.fileButton.Click += new System.EventHandler(this.FileButton_Click);
            // 
            // folderButton
            // 
            this.folderButton.Cursor = System.Windows.Forms.Cursors.IBeam;
            this.folderButton.Dock = System.Windows.Forms.DockStyle.Top;
            this.folderButton.FlatAppearance.BorderSize = 0;
            this.folderButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.folderButton.Font = new System.Drawing.Font("맑은 고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.folderButton.ForeColor = System.Drawing.Color.Gainsboro;
            this.folderButton.Image = global::UITest.Properties.Resources.Folder;
            this.folderButton.ImageAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.folderButton.Location = new System.Drawing.Point(0, 40);
            this.folderButton.Name = "folderButton";
            this.folderButton.Padding = new System.Windows.Forms.Padding(12, 0, 0, 0);
            this.folderButton.Size = new System.Drawing.Size(150, 48);
            this.folderButton.TabIndex = 1;
            this.folderButton.Tag = "　폴더 목록";
            this.folderButton.Text = "　폴더 목록";
            this.folderButton.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.folderButton.TextImageRelation = System.Windows.Forms.TextImageRelation.ImageBeforeText;
            this.folderButton.UseVisualStyleBackColor = true;
            this.folderButton.Click += new System.EventHandler(this.FolderButton_Click);
            // 
            // menuIconPanel
            // 
            this.menuIconPanel.Controls.Add(this.menuButton);
            this.menuIconPanel.Dock = System.Windows.Forms.DockStyle.Top;
            this.menuIconPanel.Location = new System.Drawing.Point(0, 0);
            this.menuIconPanel.Name = "menuIconPanel";
            this.menuIconPanel.Size = new System.Drawing.Size(150, 40);
            this.menuIconPanel.TabIndex = 0;
            // 
            // menuButton
            // 
            this.menuButton.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(50)))), ((int)(((byte)(52)))), ((int)(((byte)(77)))));
            this.menuButton.Dock = System.Windows.Forms.DockStyle.Top;
            this.menuButton.FlatAppearance.BorderSize = 0;
            this.menuButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.menuButton.Font = new System.Drawing.Font("맑은 고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.menuButton.ForeColor = System.Drawing.Color.Gainsboro;
            this.menuButton.Image = global::UITest.Properties.Resources.Menu;
            this.menuButton.Location = new System.Drawing.Point(0, 0);
            this.menuButton.Name = "menuButton";
            this.menuButton.Size = new System.Drawing.Size(150, 48);
            this.menuButton.TabIndex = 0;
            this.menuButton.Tag = "  메뉴";
            this.menuButton.Text = "  메뉴";
            this.menuButton.TextImageRelation = System.Windows.Forms.TextImageRelation.ImageBeforeText;
            this.menuButton.UseVisualStyleBackColor = false;
            this.menuButton.Click += new System.EventHandler(this.menuButton_Click);
            // 
            // TitleBarPanel
            // 
            this.TitleBarPanel.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(50)))), ((int)(((byte)(52)))), ((int)(((byte)(77)))));
            this.TitleBarPanel.Controls.Add(this.closeButton);
            this.TitleBarPanel.Dock = System.Windows.Forms.DockStyle.Top;
            this.TitleBarPanel.Font = new System.Drawing.Font("맑은 고딕", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.TitleBarPanel.ForeColor = System.Drawing.Color.White;
            this.TitleBarPanel.Location = new System.Drawing.Point(150, 0);
            this.TitleBarPanel.Name = "TitleBarPanel";
            this.TitleBarPanel.Size = new System.Drawing.Size(921, 40);
            this.TitleBarPanel.TabIndex = 1;
            this.TitleBarPanel.MouseDown += new System.Windows.Forms.MouseEventHandler(this.TitleBarPanel_MouseDown);
            // 
            // closeButton
            // 
            this.closeButton.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.closeButton.BackColor = System.Drawing.Color.Transparent;
            this.closeButton.FlatAppearance.BorderSize = 0;
            this.closeButton.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.closeButton.Font = new System.Drawing.Font("맑은 고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.closeButton.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(104)))), ((int)(((byte)(224)))));
            this.closeButton.Image = global::UITest.Properties.Resources.Close_Blue;
            this.closeButton.Location = new System.Drawing.Point(888, 3);
            this.closeButton.Name = "closeButton";
            this.closeButton.Size = new System.Drawing.Size(26, 26);
            this.closeButton.TabIndex = 2;
            this.closeButton.UseVisualStyleBackColor = false;
            this.closeButton.Click += new System.EventHandler(this.closeButton_Click);
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1071, 568);
            this.Controls.Add(this.TitleBarPanel);
            this.Controls.Add(this.menuPanel);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.Name = "MainForm";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "MainForm";
            this.menuPanel.ResumeLayout(false);
            this.menuIconPanel.ResumeLayout(false);
            this.TitleBarPanel.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private Panel menuPanel;
        private Panel menuIconPanel;
        private Button folderButton;
        private Button purgeButton;
        private Button svnButton;
        private Button editButton;
        private Button fileButton;
        private Button accoutButton;
        private Button optionButton;
        private Panel TitleBarPanel;
        private Button menuButton;
        private Button closeButton;
    }
}