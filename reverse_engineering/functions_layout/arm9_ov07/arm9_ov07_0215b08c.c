
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215b08c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar2 = *(uint *)(*(int *)(param_1 + 4) + 0x124);
  if (uVar2 == 0x4ff0) {
    piVar1 = *(int **)(*(int *)(iVar4 + 0x44) + 4);
    (**(code **)(*piVar1 + 0x198))(piVar1,*(undefined4 *)(iVar4 + 0x5c));
  }
  else if ((uVar2 & 0xf000) != 0) {
    piVar1 = *(int **)(*(int *)(iVar4 + 0x44) + 4);
    pcVar3 = *(code **)(*piVar1 + 0x198);
    (*pcVar3)(piVar1,uVar2 & 0xffff0fff,0x198,pcVar3,param_4);
    uVar2 = *(uint *)(*(int *)(param_1 + 4) + 0x124);
    if ((uVar2 & 0x3000) != 0) {
      *(uint *)(iVar4 + 0x6c) = uVar2;
    }
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x128))();
  if ((((uVar2 & 3) == 3) && (*(char *)(*(int *)(param_1 + 4) + 0xa8) == '\0')) &&
     (_DAT_021d5160 <= DAT_02093c24)) {
    FUN_0207342c(0x78);
  }
  return;
}

