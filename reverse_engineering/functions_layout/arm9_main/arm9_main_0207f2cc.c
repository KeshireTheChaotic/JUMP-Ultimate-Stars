
void FUN_0207f2cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint local_64;
  int local_60;
  int local_5c;
  undefined1 auStack_58 [16];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  for (puVar2 = *(undefined4 **)(param_1 + 0xb0); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    iVar3 = puVar2[2];
    iVar1 = *(int *)(iVar3 + 8);
    iVar4 = *(int *)(*(int *)(iVar3 + 0xc) + 0x5c);
    local_34 = *(int *)(iVar4 + 0x10) +
               ((int)*(short *)(iVar1 + 0x2e) - (int)*(short *)(iVar1 + 0x32)) * 0x100;
    local_2c = *(int *)(iVar4 + 0x10) +
               ((int)*(short *)(iVar1 + 0x2e) + (int)*(short *)(iVar1 + 0x32)) * 0x100;
    local_38 = *(int *)(iVar4 + 0xc) +
               ((int)*(short *)(iVar1 + 0x2c) - (int)*(short *)(iVar1 + 0x30)) * 0x100;
    local_30 = *(int *)(iVar4 + 0xc) +
               ((int)*(short *)(iVar1 + 0x2c) + (int)*(short *)(iVar1 + 0x30)) * 0x100;
    local_44 = *(int *)(iVar4 + 0x18) +
               ((int)*(short *)(iVar1 + 0x36) - (int)*(short *)(iVar1 + 0x3a)) * 0x100;
    local_3c = *(int *)(iVar4 + 0x18) +
               ((int)*(short *)(iVar1 + 0x36) + (int)*(short *)(iVar1 + 0x3a)) * 0x100;
    local_48 = *(int *)(iVar4 + 0x14) +
               ((int)*(short *)(iVar1 + 0x34) - (int)*(short *)(iVar1 + 0x38)) * 0x100;
    local_40 = *(int *)(iVar4 + 0x14) +
               ((int)*(short *)(iVar1 + 0x34) + (int)*(short *)(iVar1 + 0x38)) * 0x100;
    local_60 = *(int *)(iVar4 + 0xc) - *(int *)(iVar4 + 0x14);
    local_5c = *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0x18);
    func_0x0216220c(*(undefined4 *)(param_1 + 0xf8),&local_38,&local_48,&local_60,auStack_58,
                    &local_64,0);
    iVar1 = *(int *)(*(int *)(iVar3 + 0xc) + 0x5c);
    if ((((local_64 & 8) != 0) &&
        (iVar4 = FUN_0206cf28(*(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x30)), iVar4 != 0)) &&
       (*(short *)(iVar1 + 0x24) < 0)) {
      *(uint *)(*(int *)(iVar3 + 0xc) + 0x78) = *(uint *)(*(int *)(iVar3 + 0xc) + 0x78) | 0x1000000;
    }
    if ((((local_64 & 2) != 0) &&
        (iVar4 = FUN_0206cf28(*(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x30)), iVar4 == 0)) &&
       (0 < *(short *)(iVar1 + 0x24))) {
      *(uint *)(*(int *)(iVar3 + 0xc) + 0x78) = *(uint *)(*(int *)(iVar3 + 0xc) + 0x78) | 0x2000000;
    }
  }
  return;
}

