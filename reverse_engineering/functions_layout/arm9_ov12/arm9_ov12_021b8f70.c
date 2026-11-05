
void FUN_021b8f70(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_1[0x2a];
  if ((iVar3 != 0) && (param_1[0x29] != 0)) {
    iVar5 = (param_1[0x29] + 1) - iVar3;
    if (0 < iVar5) {
      if ((param_1[0x2b] & 1U) == 0) {
        piVar1 = param_1 + 0x26;
      }
      else {
        piVar1 = param_1 + 0x25;
      }
      iVar4 = *piVar1 + param_1[0x27] * -2;
      uVar2 = FUN_0200d338(iVar3 * iVar4);
      (**(code **)(*param_1 + 0x134))(param_1,uVar2);
      iVar3 = FUN_0200d338((iVar4 - *(int *)(param_1[0x2c] + 0x98)) * param_1[0x28],iVar5);
      (**(code **)(*param_1 + 0x130))(param_1,param_1[0x27] + iVar3);
    }
  }
  return;
}

