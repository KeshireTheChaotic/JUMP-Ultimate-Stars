
void FUN_02176de8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,dword param_6,dword param_7,undefined4 param_8,
                 undefined4 param_9)

{
  uint uVar1;
  int iVar2;
  
  DAT_021a7410 = param_1;
  FUN_02175770();
  *DAT_021a7410 = 0;
  DAT_021a7410[1] = FUN_0217d21c + 1;
  DAT_021a7410[2] = FUN_02176030 + 1;
  DAT_021a7410[3] = FUN_02175db8 + 1;
  DAT_021a7410[4] = thunk_FUN_0217eaf0 + 1;
  if (param_6 == 0) {
    param_6 = 0x2000;
  }
  DAT_021a7410[5] = param_6;
  if (param_7 == 0) {
    param_7 = 0x2000;
  }
  DAT_021a7410[6] = param_7;
  DAT_021a7410[7] = 0;
  DAT_021a7410[8] = param_2;
  DAT_021a7410[9] = 0;
  DAT_021a7410[10] = 0;
  *(undefined1 *)(DAT_021a7410 + 0xb) = 0;
  *(undefined1 *)((int)DAT_021a7410 + 0x2d) = 0;
  DAT_021a7410[0x19] = 0;
  DAT_021a7410[0x1a] = &DAT_021a7d40;
  DAT_021a7410[0x1b] = &DAT_021a7e40;
  DAT_021a7410[0x1c] = 0;
  DAT_021a7410[0x1d] = 0;
  DAT_021a7410[0x1e] = 0;
  DAT_021a7410[0x1f] = 0;
  DAT_021a7410[0x20] = 0;
  DAT_021a7410[0x21] = 0;
  DAT_021a7410[0x22] = 0;
  DAT_021a7410[0x23] = 0;
  DAT_021a7410[0x24] = 0;
  DAT_021a7410[0x25] = 0;
  FUN_02176514();
  FUN_0217763c(DAT_021a7410 + 0x26,param_2,DAT_021a7410 + 7,param_3,*(undefined4 *)(param_2 + 0x24),
               (int)DAT_021a7410 + 0x2e,FUN_0217626c + 1,0);
  FUN_02178194(DAT_021a7410 + 0xbe,DAT_021a7410 + 7,(int)DAT_021a7410 + 0x2e,param_8,param_9);
  FUN_0217e2cc(DAT_021a7410 + 0xd5,DAT_021a7410 + 7,DAT_021a7410,DAT_021a7410 + 1,&DAT_021a7d40,
               &DAT_021a7e40,param_8,param_9);
  FUN_0217eb44(DAT_021a7410 + 500);
  uVar1 = FUN_02004b04(param_4);
  if (uVar1 < 0x100) {
    iVar2 = FUN_02004b04(param_4);
  }
  else {
    iVar2 = 0xff;
  }
  FUN_02051890(param_4,&DAT_021a7d40,iVar2);
  (&DAT_021a7d40)[iVar2] = 0;
  uVar1 = FUN_02004b04(param_5);
  if (uVar1 < 0x100) {
    iVar2 = FUN_02004b04(param_5);
  }
  else {
    iVar2 = 0xff;
  }
  FUN_02051890(param_5,&DAT_021a7e40,iVar2);
  (&DAT_021a7e40)[iVar2] = 0;
  return;
}

