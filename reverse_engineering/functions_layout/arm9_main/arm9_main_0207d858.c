
void FUN_0207d858(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  if (param_1 == 0 || param_3 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_3 + 0x14);
  bVar5 = (uVar1 & 0x1000000) != 0;
  if (bVar5) {
    uVar1 = *(uint *)(iVar3 + 100);
  }
  if (bVar5 && uVar1 != 0) {
    FUN_0207c070();
  }
  puVar4 = *(undefined4 **)(DAT_0214be10 + 0x70);
  do {
    if (puVar4 == (undefined4 *)0x0) {
LAB_0207d8e8:
      if (*(int *)(iVar3 + 0x70) == param_2 + 0x2c) {
        *(undefined **)(iVar3 + 0x70) = &DAT_02092e50;
      }
      if (*(int *)(iVar3 + 0x74) == param_2 + 0x34) {
        *(undefined **)(iVar3 + 0x74) = &DAT_02092e50;
      }
      FUN_02037c24(iVar3 + 8,param_3);
      FUN_020517fc(param_3,0,0x2c);
      FUN_02037b98(DAT_0214be10 + 0x18,param_3);
      return;
    }
    if (param_3 == puVar4[2]) {
      FUN_02037c24(DAT_0214be10 + 0x70,puVar4);
      iVar2 = DAT_0214be10 + 0xd8;
      puVar4[2] = 0;
      FUN_02037b98(iVar2,puVar4);
      goto LAB_0207d8e8;
    }
    puVar4 = (undefined4 *)*puVar4;
  } while( true );
}

