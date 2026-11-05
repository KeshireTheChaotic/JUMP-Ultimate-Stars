
void FUN_021ae748(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int local_2c;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  iVar1 = param_1[0x5e];
  local_20 = -param_1[99];
  uStack_18 = param_4;
  for (uVar4 = 0; uVar4 < (uint)param_1[0x56]; uVar4 = uVar4 + 1) {
    iVar3 = *(int *)(param_1[0x55] + uVar4 * 4);
    FUN_021b619c(iVar3);
    if (uVar4 == 0) {
      iVar2 = *(int *)(iVar3 + 0xd8);
      if (iVar2 == 0) {
        bVar5 = param_1[0x5f] != (int)*(short *)(iVar3 + 0xce);
        if (bVar5) {
          param_1[0x5f] = (int)*(short *)(iVar3 + 0xce);
        }
        param_1[0x5e] = (int)*(short *)(iVar3 + 0xcc);
      }
      else {
        iVar2 = (int)*(short *)(iVar3 + 0xce) +
                (int)*(short *)(iVar2 + 0x96) + (int)*(short *)(iVar2 + 0x9a);
        bVar5 = iVar2 != param_1[0x5f];
        if (bVar5) {
          param_1[0x5f] = iVar2;
        }
        param_1[0x5e] =
             (int)*(short *)(iVar3 + 0xcc) +
             (int)*(short *)(*(int *)(iVar3 + 0xd8) + 0x94) +
             (int)*(short *)(*(int *)(iVar3 + 0xd8) + 0x98);
      }
      local_2c = param_1[0x5e];
      iVar2 = FUN_021b5338(param_1,param_1[0x2d]);
      if ((*(int *)(iVar2 + 0xc) != 0) && ((char)param_1[0x45] != '\0')) {
        local_2c = local_2c + *(int *)(*(int *)(iVar2 + 0xc) + 0x94);
      }
      FUN_021b5900(param_1,local_2c,param_1[0x5f] * param_1[0x60]);
      FUN_021b6110(param_1);
      if (bVar5) {
        iVar2 = param_1[0x4e];
        param_1[0x4e] = -1;
        (**(code **)(*param_1 + 0x1a0))(param_1,param_1[0x61],0);
        (**(code **)(*param_1 + 0x198))(param_1,iVar2);
      }
      if (iVar1 == 0) {
        iVar2 = param_1[0x4e];
        param_1[0x4e] = -1;
        (**(code **)(*param_1 + 0x198))(param_1,iVar2);
        local_20 = -param_1[99];
      }
    }
    local_1c = local_20;
    FUN_021b5940(iVar3,&local_1c);
    if ((int)((uint)*(byte *)(*(int *)(iVar3 + 100) + 0x10) << 0x18) < 0) {
      local_20 = local_20 + param_1[0x5f] * 0x1000;
    }
    FUN_0202a658(*(undefined4 *)(iVar3 + 0x50));
  }
  return;
}

