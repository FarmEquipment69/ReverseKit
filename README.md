# ReverseKit

<b>ReverseKit - Reverse Engineering Aid</b>

### Features

Hooking library - Normal JMP instruction hook and trampoline hook.

1. <b>Imports information</b> - Prints all the imports with the origin dll name, function name and addresses respectively.
2. <b>Intercept all system/shell/all commands</b> - Hooks CreateProcessInternalW to intercept all commands, even hidden ones.
3. <b>Intercept URLs sent through URLDownloadToFileA and InternetOpenUrlW </b> - Hooks these functions to intercept all URL links.
4. <b>Common debugger check bypass </b> - Hooks IsDebuggerPresent and CheckRemoteDebuggerPresent and returns FALSE.

<b>Work in progress, adding more necessary features.</b>


[![Video Showcase](https://img.youtube.com/vi/3P8ck5U_OXY/maxresdefault.jpg)](https://www.youtube.com/watch?v=3P8ck5U_OXY)
