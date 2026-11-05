
void FUN_0217efd4(int param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  byte local_20 [4];
  undefined4 local_1c [2];
  
  if (param_3 == 0) {
    FUN_0217f064();
    return;
  }
  iVar3 = 0;
  do {
    *(char *)(param_1 + iVar3) = (char)iVar3;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x100);
  local_1c[0] = 0;
  local_20[0] = 0;
  iVar3 = 0xff;
  do {
    iVar2 = FUN_0217f0a8(param_1,iVar3,param_2,param_3,local_20,local_1c);
    uVar1 = *(undefined1 *)(param_1 + iVar3);
    *(undefined1 *)(param_1 + iVar3) = *(undefined1 *)(param_1 + iVar2);
    *(undefined1 *)(param_1 + iVar2) = uVar1;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 0x101) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 0x102) = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 0x103) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 0x104) = *(undefined1 *)(param_1 + (uint)local_20[0]);
  return;
}

