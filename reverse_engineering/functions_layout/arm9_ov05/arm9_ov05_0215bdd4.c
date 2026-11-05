
void FUN_0215bdd4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  if ((uint)*(byte *)(param_1 + 0x4d1) < (uint)*(byte *)(param_1 + 0x4d0)) {
    *(uint *)(param_1 + 0x1e8) = param_1 + 0x1a8 + (uint)*(byte *)(param_1 + 0x4d1) * 0x10;
    *(char *)(param_1 + 0x4d1) = *(char *)(param_1 + 0x4d1) + '\x01';
    iVar2 = **(int **)(param_1 + 0x1e8);
    local_14 = ((((int)(*(byte *)(iVar2 + 0xe) & 0xf0) >> 4) + (uint)*(byte *)(iVar2 + 0x44)) * 0x30
               + 0x18) * 0x1000;
    local_18 = (((*(byte *)(iVar2 + 0xe) & 0xf) + (uint)*(byte *)(iVar2 + 0x43)) * 0x30 + 0x18) *
               0x1000;
    FUN_0214ce68(*(undefined4 *)(param_1 + 0x1a4),&local_18,&local_14);
    piVar1 = *(int **)(*(int *)(param_1 + 0x1a4) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x1a4) + 4),FUN_0215c400);
    piVar1 = *(int **)(*(int *)(param_1 + 0x1a4) + 4);
    (**(code **)(*piVar1 + 0x24))(piVar1,param_1);
    FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x1a4) + 4),0x82002b,0);
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x1a4) + 4) + 0x68) + 0x6c))();
    *(undefined1 *)(param_1 + 0x4ef) = 1;
    FUN_0207342c(0x79,3);
    func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 4));
    func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x88) + 4));
    FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x30) + 4),FUN_0215bfc4);
  }
  else {
    FUN_0215ceec();
    FUN_02073778();
    FUN_0215bd18(param_1,1);
    func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 4));
    func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x88) + 4));
    if (*(int *)(param_1 + 0x188) == 0) {
      FUN_02159c30(param_1,0);
      FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x30) + 4),FUN_0215bf9c);
    }
    else {
      FUN_0215b8f0();
      FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x30) + 4),FUN_021592d4);
    }
  }
  return;
}

