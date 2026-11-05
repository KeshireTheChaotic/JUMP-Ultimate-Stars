
void FUN_0207cb58(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  piVar3 = (int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x100;
  do {
    iVar5 = *piVar3;
    while (iVar5 != 0) {
      FUN_02037c24(piVar3,iVar5);
      iVar1 = DAT_0214be10;
      if (iVar6 == 0) {
        FUN_020517fc(iVar5,0,0x10);
        FUN_02037b98(iVar1 + 0x20,iVar5);
      }
      else {
        *(undefined4 *)(*(int *)(iVar5 + 8) + 0x68) = 0;
        iVar1 = DAT_0214be10 + 0xd8;
        *(undefined4 *)(iVar5 + 8) = 0;
        FUN_02037b98(iVar1,iVar5);
      }
      iVar5 = *piVar3;
    }
    iVar6 = iVar6 + 1;
    piVar3 = piVar3 + 2;
  } while (iVar6 < 3);
  iVar6 = 0;
  puVar2 = (undefined4 *)(DAT_0214be10 + 0x28);
  do {
    for (puVar4 = (undefined4 *)*puVar2; puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)*puVar4
        ) {
      if (param_1 == puVar4[2]) {
        FUN_02037c24(puVar2,puVar4);
        iVar5 = DAT_0214be10 + 0xd8;
        puVar4[2] = 0;
        FUN_02037b98(iVar5,puVar4);
        break;
      }
    }
    iVar6 = iVar6 + 1;
    puVar2 = puVar2 + 2;
    if (0x15 < iVar6) {
      FUN_02037c24(DAT_0214be10,param_1);
      FUN_02037b98(DAT_0214be10 + 0x10,param_1);
      if (*(int *)(param_1 + 0x5c) != 0) {
        FUN_02082d2c(*(undefined4 *)(DAT_0214be10 + 0xf0));
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      if (*(int *)(param_1 + 0x60) == 0) {
        return;
      }
      FUN_0207b000(*(undefined4 *)(DAT_0214be10 + 0xec));
      *(undefined4 *)(param_1 + 0x60) = 0;
      return;
    }
  } while( true );
}

