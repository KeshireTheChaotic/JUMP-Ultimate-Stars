
void FUN_021535b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_58;
  undefined4 local_54;
  int local_50 [7];
  undefined1 auStack_34 [12];
  undefined4 uStack_28;
  
  iVar4 = (uint)*(byte *)(param_1 + 0x35d) * 0x3c + *(int *)(*(int *)(param_1 + 0x330) + 0x30);
  uStack_28 = param_4;
  iVar2 = FUN_02153808(param_1,*(undefined1 *)(param_1 + 0x35c));
  iVar3 = FUN_02151454(*(undefined4 *)(param_1 + 0xc),0x564d5049,0);
  iVar2 = *(int *)(iVar2 * 0x28 + param_1 + 0xdc);
  *(undefined1 *)(*(int *)(param_1 + 0x330) + 0x56) = 1;
  func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x14) + 4));
  func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x18) + 4));
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),1);
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x18) + 4),1);
  local_50[6] = 0x999;
  FUN_02151858(*(undefined4 *)(param_1 + 0xc),local_50 + 6);
  local_50[3] = 0;
  local_50[4] = 0x1000;
  local_50[5] = 0x1000;
  FUN_0214e39c(auStack_34,local_50 + 5,local_50 + 4,local_50 + 3);
  FUN_02013c48(*(undefined4 *)(iVar3 + 4),auStack_34,0);
  FUN_02028330(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  iVar2 = FUN_02153588(*(undefined4 *)(param_1 + 0x18));
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02153b54(param_1,*(undefined1 *)(param_1 + 0x35c));
  *(undefined4 *)(param_1 + 0x344) = 0x1000;
  func_0x021b6760(*(undefined4 *)(*(int *)(param_1 + 0x50) + 4),4,FUN_02153de0);
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x28) + 4),0x11001,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x28) + 4) + 0x68) + 0x6c))();
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x48) + 4),0x11003,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x48) + 4) + 0x68) + 0x6c))();
  local_50[2] = 0x7b000;
  FUN_0214ef60(*(undefined4 *)(param_1 + 0x44),local_50 + 2);
  for (iVar2 = 0; iVar2 < (int)(uint)*(byte *)(iVar4 + 0x2c); iVar2 = iVar2 + 1) {
    iVar6 = iVar2 * 0x28 + param_1;
    bVar1 = *(byte *)(iVar4 + iVar2 + 0x2d);
    iVar3 = *(int *)(*(int *)(param_1 + 0x330) + 0x34);
    local_50[1] = 0x95000;
    FUN_0214d650(*(undefined4 *)(iVar6 + 0xd8),local_50 + 1);
    for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)((uint)bVar1 * 0x48 + iVar3 + 0x44);
        iVar5 = iVar5 + 1) {
      local_50[0] = (iVar5 + 0x83) * 0x1000;
      FUN_0214d650(*(undefined4 *)(iVar6 + iVar5 * 4 + 0xdc),local_50);
    }
  }
  local_54 = 0x95000;
  FUN_0214d650(*(undefined4 *)(param_1 + 0x14),&local_54);
  local_58 = 0x83000;
  FUN_0214d650(*(undefined4 *)(param_1 + 0x18),&local_58);
  return;
}

