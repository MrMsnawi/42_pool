esc - normal mode
i - insert mode
:q - quit
:w - write
:wq - write & quit
:q! - quit override
HJKL - jumps left/down/up/right one char/lines at a time
a - append text
I - insert (before line)
A - append (after line)
o - new line below
O - new line above

	///More interesting stuffs - 7:03///
w - next word
b - previous word
W - next word (ignore special characters)
B - previous word (ignore special characters)
r - replace letter - replace a character (without going insert mode)
R - replace mode - replace the whole word (without going insert mode)
cw - change word
8w - jump eight words
c7w - change seven words
4j/<Down Arrow> - move four lines down
C - replace rest of line
dw - delete word
D - delete rest of line
d4w - delete 4 words
dd - delete line - deletes the whole line wherever your cursor is
cc - change line - change the whole line wherever your cursor is
4dd - delete 4 lines
8cc - change 8 lines
x - deletes a character (without going insert mode)

	///Do stuffs 14:46///
u - undo
Ctrl + u undo inside insert mode
*Ctrl + r - redo
5u - ndo last five changes
7 ctrl + r - redo seven last things

ciw - change inner word
diw	- delete inner word

J - deletes an empty line (without going insert mode)
P - inserts an empty line (without going insert mode)
ci)/]/} - change inner parentheses/brackets

% - jump to brackets/parentheses
c% - change until bracket - change inner content including the closing bracket

gg - navigate to the beginning of the file
G - navigate to the end of the file

17G - Go to line 17
:19 - Go to line 19

0 - beginning of line - navigate to the beginning of the line
$ - end of line - navigate to the end of the line

v - visual mode
	d - delete
	c - change
	y - yanking(copy)
	Y - yank immediately without going to visual mode
	p - paste after
	P - paste before
	yy - yank line
	5yy - yank five lines
	9p - paste nine times
	y5w - yank five words
	yi) yank inner brackets
	yiw - yank inner words
	50<downArrowKey> - select 50 lines below
	
	///More about visual mode 21:52///

V - visual line
ctrl + v - visual block

dot(.) - repeat last operation
zz - center selected line
> - shift right
< - shift left
= - indent

>> & << - shift Line
== - indent line

gg=G - indent whole file
ggdG - delete whole file

	///Commands 25:44///

/word - search for word
n - next occurence
N - previous occurence

+ - next token occurrence
# - previous token occurrence

*:s/old/new/g - replace
:%s/old/new/g - replace everywhere

:set number/nu - line numbers
:set relativenumber/rnu - rel. numbers
*:colorscheme <theme> - select theme

:set tabstop=4 - tab width to 4
:set autoindent - auto indentation
:set mouse=a - activate mouse
:set mouse="" - deactivate mouse

	///Neovim introduction 29:48///
nvim
	f8 - open up a custom plugin
	:TerminalSplit bash


	///Others///
:qa! quit, kill vim process and ignore changes
	Customize indentation
:set shiftwidth=4
:set tabend=4

4h/j/k/l - Jumps left/down/up/right 4 characters/lines
c4h/j/k.l - Replaces 4 chars/lines from left/down/up/right (You can repalce 'c' with 'd' to delete without going insert mode)
