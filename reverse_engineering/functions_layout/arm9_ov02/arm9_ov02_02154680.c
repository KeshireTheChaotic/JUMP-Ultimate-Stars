
void FUN_02154680(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar4 = (uint)*(byte *)(param_1 + 0x35d) * 0x3c + *(int *)(*(int *)(param_1 + 0x330) + 0x30);
  for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(iVar4 + 0x2c); iVar5 = iVar5 + 1) {
    iVar7 = (uint)*(byte *)(iVar4 + iVar5 + 0x2d) * 0x48 +
            *(int *)(*(int *)(param_1 + 0x330) + 0x34);
    FUN_021518d4(&local_30);
    uVar3 = FUN_0200c954((int)*(short *)(iVar7 + 0x2c) - (int)*(short *)(param_1 + 0x354));
    uVar3 = FUN_0200c9e4(0x3f19999a,uVar3);
    FUN_0200c9e4(0x45800000,uVar3);
    local_30 = FUN_0200c8e0();
    uVar3 = FUN_0200c954((int)*(short *)(iVar7 + 0x2e) - (int)*(short *)(param_1 + 0x356));
    uVar3 = FUN_0200c9e4(0x3f19999a,uVar3);
    FUN_0200c9e4(0x45800000,uVar3);
    local_2c = FUN_0200c8e0();
    iVar8 = iVar5 * 0x28 + param_1;
    FUN_0214f960(*(undefined4 *)(iVar8 + 0xd8),&local_30);
    for (iVar6 = 0; iVar6 < (int)(uint)*(byte *)(iVar7 + 0x44); iVar6 = iVar6 + 1) {
      FUN_0214fa00(&local_3c,&DAT_0215c228 + iVar6 * 0xc + (*(byte *)(iVar7 + 0x44) - 1) * 0x30);
      uVar3 = FUN_0200c954(local_3c);
      FUN_0200c9e4(uVar3,0x3f19999a);
      local_3c = FUN_0200c8e0();
      uVar3 = FUN_0200c954(local_38);
      FUN_0200c9e4(uVar3,0x3f19999a);
      local_38 = FUN_0200c8e0();
      iVar2 = *(int *)(*(int *)(iVar8 + iVar6 * 4 + 0xec) + 4);
      FUN_02023894(iVar2,(uint)*(byte *)(iVar8 + iVar6 + 0xfc) * 2 + 0x30000 +
                         *(int *)(iVar2 + 0x10) * 0x10,0);
      (**(code **)(**(int **)(*(int *)(*(int *)(iVar8 + iVar6 * 4 + 0xec) + 4) + 0x68) + 0x6c))();
      FUN_0214f960(*(undefined4 *)(iVar8 + iVar6 * 4 + 0xdc),&local_3c);
    }
  }
  bVar1 = *(byte *)(param_1 + 0x35c);
  iVar5 = *(int *)(*(int *)(param_1 + 0x330) + 0x34);
  uVar3 = FUN_02153588(*(undefined4 *)(param_1 + 0x14));
  iVar4 = FUN_02153010(uVar3,0x31305053);
  FUN_02023894(*(undefined4 *)(iVar4 + 4),0x1100e,0);
  (**(code **)(**(int **)(*(int *)(iVar4 + 4) + 0x68) + 0x6c))();
  if (*(char *)((uint)bVar1 * 0x48 + iVar5 + 0x44) == '\x01') {
    local_40 = 0x13333;
    FUN_0214f244(iVar4,&local_40);
  }
  else {
    local_44 = 0x1cccc;
    FUN_0214f244(iVar4,&local_44);
  }
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  local_48 = 0x999;
  FUN_02153d28(*(undefined4 *)(param_1 + 0x338),&local_48);
  *(undefined4 *)(param_1 + 0x344) = 0x999;
  return;
}

