"Set solarized colorscheme
syntax enable
if has('gui_running')
    set background=light
else
    set background=dark
endif
let g:solarized_termcolors= 256
let g:solarized_termtrans = 1
let g:solarized_degrade   = 0
let g:solarized_bold      = 1
let g:solarized_underline = 1
let g:solarized_italic    = 1
let g:solarized_contrast  = "normal"
let g:solarized_visibility= "normal"
colorscheme solarized

filetype plugin indent on

set nocompatible
set nu
set incsearch
set mouse=a
set tabstop=8
set shiftwidth=8
set smarttab
"set expandtab
set autoindent
set smartindent

:command Path :echo expand('%:p')

:map <F2> <ESC>:exec &mouse!=""? "set mouse=" : "set mouse=nv"<CR>

"Plugins
call plug#begin()
filetype plugin on
Plug 'scrooloose/nerdcommenter'
call plug#end()
