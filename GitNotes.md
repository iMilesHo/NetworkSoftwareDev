### Checking and Configuring Your Git Account

#### **Checking Git Configuration:**

1. **View Configured User Information:**

   - **Username**: `git config user.name`
   - **Email**: `git config user.email`
   - This will display the username and email associated with your commits.

2. **List All Configurations:**
   - Use `git config --list` to see all the configuration settings, including remote repository URLs and any other custom settings.

#### **Configuring Git:**

1. **Set Username and Email:**

   - Set your username: `git config --global user.name "your_username"`
   - Set your email: `git config --global user.email "your_email@example.com"`
   - These settings are global and will apply to all repositories you work with on your machine.

2. **Add Remote Repository:**

   - Add a remote: `git remote add origin https://github.com/username/repository.git`
   - Replace the URL with your repository URL.

3. **Change Remote URL:**
   - If you need to update the remote URL: `git remote set-url origin new_url`

#### **Using Personal Access Tokens (PAT) with GitHub:**

- Since GitHub no longer supports password authentication for Git operations, use a PAT for operations that require authentication.
- **Generate a PAT on GitHub:** Settings > Developer settings > Personal access tokens.
- **Use the PAT:** When prompted for a password during Git operations, enter the PAT instead of your GitHub password.

#### **Storing Credentials Securely:**

- **macOS**: Use `git config --global credential.helper osxkeychain` to store your credentials securely in the Keychain.
- **Linux**: Use `git config --global credential.helper cache` to cache credentials in memory temporarily.

#### **Handling Authentication Issues:**

- If authentication fails, ensure your PAT is up to date or regenerate it if necessary.
- Always keep your PAT secure and do not share it.

---

This note covers the basics of checking and configuring your Git account, setting up remote repositories, and managing authentication securely with GitHub. Keep it handy for future reference!
