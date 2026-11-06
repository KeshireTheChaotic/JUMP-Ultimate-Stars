
/* JUS-CLASS ALFont_021d4f60::ALFont_021d4f60 [class-source-file] stores vtable 021d4f60 into *this
   (constructor) */

undefined4 *
ALFont_021d4f60::ALFont_021d4f60
          (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  ALFont_021d5010::ALFont_021d5010();
  *param_1 = &vftable;
  if (param_3 != 0) {
    param_1[0x14] = param_3;
  }
  iVar3 = param_1[0x14];
  iVar1 = thunk_FUN_0201a228(iVar3 << 3,s_ALFont_cpp_021d5060,&DAT_021d4e64,0x493);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0200ef34(iVar1,iVar3,8,0,FUN_021cb430,0,param_4);
  }
  param_1[0x1b] = uVar2;
  ALFont::InitFontChar(param_1);
  ALFont::InitHash(param_1);
  return param_1;
}

