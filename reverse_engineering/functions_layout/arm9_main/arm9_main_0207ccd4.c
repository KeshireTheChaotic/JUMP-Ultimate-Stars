
void FUN_0207ccd4(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_2 + 0x68);
  if (iVar2 != 0) {
    bVar1 = false;
    for (puVar3 = *(undefined4 **)(iVar2 + 0x20); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)*puVar3) {
      if (param_2 == puVar3[2]) {
        FUN_02037c24(iVar2 + 0x20,puVar3);
        puVar3[2] = 0;
        FUN_02037b98(param_1 + 0xd8,puVar3);
        bVar1 = true;
        break;
      }
    }
    if (!bVar1) {
      for (puVar3 = *(undefined4 **)(*(int *)(param_2 + 0x68) + 0x18); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
        if (param_2 == puVar3[2]) {
          FUN_02037c24(*(int *)(param_2 + 0x68) + 0x18,puVar3);
          puVar3[2] = 0;
          FUN_02037b98(param_1 + 0xd8,puVar3);
          break;
        }
      }
    }
  }
  iVar2 = *(int *)(param_2 + 8);
  while (iVar2 != 0) {
    FUN_02037c24(param_2 + 8,iVar2);
    FUN_020517fc(iVar2,0,0x2c);
    FUN_02037b98(param_1 + 0x18,iVar2);
    iVar2 = *(int *)(param_2 + 8);
  }
  if (*(int *)(param_2 + 100) != 0) {
    FUN_0207c070();
  }
  iVar2 = *(int *)(param_2 + 0x28);
  while (iVar2 != 0) {
    FUN_0207c070(*(undefined4 *)(iVar2 + 8));
    iVar2 = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    FUN_02082d2c(*(undefined4 *)(DAT_0214be10 + 0xf0));
    *(undefined4 *)(param_2 + 0x5c) = 0;
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    FUN_0207b000(*(undefined4 *)(DAT_0214be10 + 0xec));
    *(undefined4 *)(param_2 + 0x60) = 0;
  }
  FUN_02037c24(param_1 + 0x10,param_2);
  FUN_020517fc(param_2,0,0x188);
  FUN_02037b98(param_1 + 8,param_2);
  *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) | 0x200;
  return;
}

