
void FUN_02167b28(undefined4 *param_1,undefined1 param_2,undefined1 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_02070ff4();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined1 *)((int)param_1 + 5) = param_3;
  *(undefined1 *)(param_1 + 2) = 0x32;
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    *(undefined1 *)(param_1 + iVar2 * 2 + 3) = 0xff;
    iVar2 = iVar3;
  } while (iVar3 < 0x32);
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(bool *)((int)param_1 + 7) = param_4 != 0;
  return;
}

