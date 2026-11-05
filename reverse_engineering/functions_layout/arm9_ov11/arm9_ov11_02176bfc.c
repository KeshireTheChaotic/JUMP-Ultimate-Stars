
void FUN_02176bfc(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = *param_1;
  while (iVar2 != 0) {
    FUN_02037c24(param_1,iVar2);
    FUN_020517fc(iVar2,0,0x10);
    FUN_02037b98(DAT_02183a38 + 0x20,iVar2);
    iVar2 = *param_1;
  }
  piVar1 = (int *)param_1[2];
  while (piVar1 != (int *)0x0) {
    iVar2 = 0;
    piVar3 = piVar1;
    do {
      piVar3 = piVar3 + 2;
      iVar4 = *piVar3;
      while (iVar4 != 0) {
        FUN_02037c24(piVar3,iVar4);
        FUN_020517fc(iVar4,0,0xc);
        FUN_02037b98(DAT_02183a38 + 0x28,iVar4);
        iVar4 = *piVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 7);
    FUN_02037c24(param_1 + 2,piVar1);
    FUN_020517fc(piVar1,0,0x48);
    FUN_02037b98(DAT_02183a38 + 0x18,piVar1);
    piVar1 = (int *)param_1[2];
  }
  (**(code **)(*(int *)param_1[4] + 8))();
  FUN_0201b244(param_1);
  return;
}

