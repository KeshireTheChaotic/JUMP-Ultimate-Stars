
void FUN_02155ba0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    return;
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 0x78) + 0x50);
  uVar3 = uVar1 & 0xf;
  if (uVar3 != 0) {
    iVar2 = FUN_02155c80(*(undefined4 *)(param_1 + 0x7c));
    if (iVar2 != 0) {
      uVar3 = uVar1 & 3;
      if ((uVar1 & 4) != 0) {
        uVar3 = uVar3 | 8;
      }
      if ((uVar1 & 8) != 0) {
        uVar3 = uVar3 | 4;
      }
    }
    uVar1 = 0;
    if ((uVar3 != 8) && (uVar1 = (uint)(uVar3 == 9), uVar3 != 9)) {
      if (uVar3 == 1) {
        uVar1 = 2;
      }
      else if (uVar3 == 5) {
        uVar1 = 3;
      }
      else if (uVar3 == 4) {
        uVar1 = 4;
      }
      else if (uVar3 == 6) {
        uVar1 = 5;
      }
      else if (uVar3 == 2) {
        uVar1 = 6;
      }
      else if (uVar3 == 10) {
        uVar1 = 7;
      }
    }
    if (*(char *)(param_2 + uVar1 + 3) != '\0') {
      FUN_021565a4(param_1,0);
      return;
    }
  }
  FUN_021565a4(param_1,0,*(undefined1 *)(param_2 + 2));
  return;
}

