
/* JUS-CLASS ALFont_021d4f60::ALFont_021d4f60 [class-source-file] stores vtable 021d4f60 into *this
   (constructor) */

undefined4 *
ALFont_021d4f60::ALFont_021d4f60
          (undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_5 == 0) &&
     (iVar1 = thunk_FUN_0201a228(8,s_ALFont_cpp_021d5060,&DAT_021d4e44,0x45a), param_5 = 0,
     iVar1 != 0)) {
    param_5 = ALTextDS_021d4ef4::ALTextDS_021d4ef4();
  }
  ALFont_021d5010::ALFont_021d5010(param_1,param_5,0,param_2);
  *param_1 = &vftable;
  (**(code **)(*param_2 + 8))();
  *(short *)(param_1 + 0xe) = (short)param_3;
  if (param_4 == 0) {
    *(undefined2 *)((int)param_1 + 0x3a) = *(undefined2 *)(param_1 + 0xe);
    param_4 = param_3;
  }
  else {
    *(short *)((int)param_1 + 0x3a) = (short)param_4;
  }
  param_1[0xf] = param_6;
  iVar1 = FUN_0200d338(0x100,param_3);
  iVar2 = FUN_0200d338(0x100,param_4);
  iVar2 = iVar2 * iVar1;
  param_1[0x14] = iVar2;
  iVar1 = thunk_FUN_0201a228(iVar2 * 8,s_ALFont_cpp_021d5060,&DAT_021d4e44,0x47f);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = FUN_0200ef34(iVar1,iVar2,8,0,FUN_021cb430,0);
  }
  param_1[0x1b] = uVar3;
  ALFont::InitFontChar(param_1);
  ALFont::InitHash(param_1);
  return param_1;
}

