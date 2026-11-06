
/* JUS-GAME ALFont::InitHash [source-string] __FILE__="ALFont.cpp" __FUNCTION__="InitHash" lines=[]
   passed to 1 source-location call(s) */

void ALFont::InitHash(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_FUN_0201a228(0x400,s_ALFont_cpp_021d5060,s_InitHash_021d4e74,0x3a5);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0200ef34(iVar1,0x100,4,0,FUN_021cb6dc,0);
  }
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  return;
}

