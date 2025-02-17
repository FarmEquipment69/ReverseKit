<h1 align="left">
  ReverseKit - Dynamic Reverse Engineering Toolkit<br>
  <img src="https://i.imgur.com/q92np0W.png" alt="ReverseKit Logo" align="right">
</h1>
<p align="left">
  <img src="https://img.shields.io/github/license/zer0condition/reversekit?style=flat-square" alt="License">
  <img src="https://img.shields.io/github/stars/zer0condition/reversekit" alt="Stars">
  <img src="https://img.shields.io/github/forks/zer0condition/reversekit" alt="Forks">
</p>
<p>ReverseKit is a comprehensive toolkit designed to aid reverse engineers in the process of dynamic RE. With a wide range of features and functionalities, it provides an easy-to-use interface and helps you intercept, analyze, and manipulate code and data during runtime.</p>
<p>
  <a href="#features">Features</a> •
  <a href="#getting-started">Getting Started</a> •
  <a href="#usage">Usage</a> <br>
  <a href="#contributing">Contributing</a> •
  <a href="#license">License</a> •
  <a href="#youtube-showcase">Showcase</a>
</p>
<h2>Features</h2>
<ul>
  <li>Imports information - along with DLL name, function name, and address.</li>
  <li>Intercept all commands executed - system(), ShellExecuteEx(), etc.</li>
  <li>Intercept all thread creations - APIs like std::thread, CreateThread(), etc.</li>
  <li>Intercept URLs - APIs like UrlDownloadToFileA and InternetOpenUrlA, etc.</li>
  <li>Threads - lists thread ids along with cpu usage, allows you to suspend them with a button.</li>
  <li>Bypass common debugger checks - CheckRemoteDebugger() and IsDebuggerPresent().</li>
  <li>Easy-to-use interface powered by ImGui.</li>
  <li>Hook library with a normal JMP hook and trampoline hook.</li>
</ul>
<h2>Getting Started</h2>
<p>To get started with ReverseKit, you can clone this repository and build the project. Once the build is complete, you can inject the tool and start using it to analyze binaries.</p>
<h2>Usage</h2>
<p>ReverseKit provides a user-friendly interface that enables you to easily intercept, analyze, and manipulate code and data during runtime. With the wide range of features and functionalities, you can:</p>
<ul>
  <li>Monitor and intercept system calls and API functions</li>
  <li>Monitor CPU usage by active threads and option to suspend</li>
  <li>Analyze network traffic and intercept URLs</li>
  <li>Analyze and manipulate thread creations</li>
  <li>Hook into binary code and redirect execution flow</li>
  <li>Bypass common debugger checks</li>
</ul>
<h2>Contributing</h2>
<p>We welcome contributions from the community. If you find a bug or have an idea for a new feature, please open an issue or submit a pull request.</p>
<h2>License</h2>
<p>This project is licensed under the terms of the MIT license.</p>

<h2>Todo</h2>



- [ ] Fix instrumentation callback crashing for DLL.






<h2>YouTube Showcase</h2>
<div>
  <a href="https://www.youtube.com/watch?v=3P8ck5U_OXY"><img src="https://i.imgur.com/uGuwNif.png" alt="ReverseKit demo video"></a>
</div>
