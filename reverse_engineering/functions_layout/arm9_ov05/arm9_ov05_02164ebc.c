
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02164ebc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_128;
  undefined1 auStack_124 [4];
  undefined1 auStack_120 [256];
  
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x124);
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar1 = FUN_0200d338(uVar5,3);
  FUN_0200d338(uVar5,3);
  iVar2 = FUN_021653ac(*(undefined4 *)(iVar6 + 0x94),*(undefined4 *)(iVar6 + 0x104),uVar1,
                       extraout_r1);
  FUN_0207342c(0x78,0);
  func_0x021b65d8(*(undefined4 *)(*(int *)(iVar6 + 0x78) + 4));
  func_0x021bac28(*(undefined4 *)(iVar6 + 0x84),0x5c,0,0,0,0,0,0);
  while (iVar3 = func_0x021bad2c(*(undefined4 *)(iVar6 + 0x84)), iVar3 == 0) {
    (*DAT_020a0e18)();
  }
  iVar3 = func_0x021bacfc(*(undefined4 *)(iVar6 + 0x84));
  if (iVar3 == 0) {
    func_0x021b65e0(*(undefined4 *)(*(int *)(iVar6 + 0x78) + 4));
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar6 + 0x78) + 4),1);
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar6 + 0x80) + 4),1);
  }
  else {
    FUN_02073ebc(1,2);
    while (iVar3 = FUN_0207382c(), iVar3 == 0) {
      (*DAT_020a0e18)();
    }
    FUN_02073ebc(0,1);
    while (iVar3 = FUN_0207382c(), iVar3 == 0) {
      (*DAT_020a0e18)();
    }
    FUN_021646f4(iVar6,iVar2,auStack_124,auStack_120);
    iVar3 = 0;
    do {
      FUN_02072870(iVar3,-(uint)*(ushort *)(iVar2 + iVar3 * 2 + 8));
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x124);
    FUN_02166344(*(undefined4 *)(iVar6 + 0x90),iVar2);
    FUN_02166730(*(undefined4 *)(iVar6 + 0x90));
    iVar3 = FUN_021504d4(param_1,s_KOMAROUT__02165238._0_4_);
    uVar1 = FUN_02164140(iVar2);
    FUN_02023894(*(undefined4 *)(iVar3 + 4),uVar1,0);
    (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
    iVar3 = FUN_021504d4(param_1,s_KOMAROUT__02165238._4_4_);
    uVar1 = FUN_0200d338(uVar5,3);
    uVar1 = FUN_021641f8(iVar2,uVar1,ram0x02165240);
    FUN_02023894(*(undefined4 *)(iVar3 + 4),uVar1,0);
    (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
    local_128 = 0x84000;
    FUN_0214d494(param_1,&local_128);
    func_0x021b6760(*(undefined4 *)(param_1 + 4),1,FUN_02164db0);
    FUN_02164aec(iVar6);
    FUN_021634d0(iVar6);
    FUN_02164b94(iVar6);
    piVar4 = *(int **)(*(int *)(iVar6 + 0x68) + 4);
    (**(code **)(*piVar4 + 0xd8))(piVar4,1);
    FUN_02023894(*(undefined4 *)(*(int *)(iVar6 + 0x68) + 4),0xb0002f,0);
    (**(code **)(**(int **)(*(int *)(*(int *)(iVar6 + 0x68) + 4) + 0x68) + 0x6c))();
    FUN_021639a8(*(undefined4 *)(iVar6 + 0x68),*(int *)(*(int *)(param_1 + 4) + 0x50) + 0xc);
    FUN_0207342c(0x78,8);
    while (iVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(iVar6 + 0x68) + 4) + 0x68) + 0x68))(),
          iVar3 == 0) {
      (*DAT_020a0e18)();
    }
    piVar4 = *(int **)(*(int *)(iVar6 + 0x68) + 4);
    (**(code **)(*piVar4 + 0xd8))(piVar4,0);
    FUN_0207342c(0x78,9);
    FUN_02164a58(iVar6,iVar2,0);
    func_0x021b65e0(*(undefined4 *)(*(int *)(iVar6 + 0x78) + 4));
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar6 + 0x78) + 4),1);
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar6 + 0x80) + 4),1);
  }
  return;
}

