
void FUN_02151c90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int local_38 [6];
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = FUN_0214d37c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x90));
  local_38[4] = 0;
  local_38[5] = ((int)*(short *)(*(int *)(iVar1 + 4) + 0xcc) -
                *(int *)(*(int *)(param_1 + 4) + 0x94)) * 0x1000;
  FUN_021511c8(param_1,local_38 + 5,local_38 + 4);
  *(int *)(*(int *)(param_1 + 4) + 0x98) = *(int *)(*(int *)(param_1 + 4) + 0x98) + -9;
  *(undefined1 **)(*(int *)(param_1 + 4) + 0xb4) = &LAB_02151e7c_1;
  if ((*(uint *)(*(int *)(param_1 + 4) + 0xac) & 1) == 0) {
    local_1e = 0;
    local_1a = (undefined2)*(undefined4 *)(*(int *)(param_1 + 4) + 0x98);
    local_20 = 0;
    local_1c = (undefined2)*(undefined4 *)(*(int *)(param_1 + 4) + 0x94);
    uVar2 = FUN_02150a40(0,&local_20,&DAT_02093c8c);
    FUN_02020e98(param_1,uVar2);
    iVar1 = FUN_0203b3e4();
    iVar1 = FUN_0214fba8(*(undefined4 *)(iVar1 + 0x88),0x871000,2,0x20);
    local_38[2] = 0xa000;
    local_38[3] = 0x8000;
    FUN_021511c8(iVar1,local_38 + 3,local_38 + 2);
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    FUN_0214e688(param_1,iVar1);
    iVar1 = FUN_0203b3e4();
    iVar1 = FUN_0214fba8(*(undefined4 *)(iVar1 + 0x88),0x871000,6,0x20);
    local_38[0] = (*(int *)(*(int *)(param_1 + 4) + 0x98) + -10) * 0x1000;
    local_38[1] = 0x8000;
    FUN_021511c8(iVar1,local_38 + 1,local_38);
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    FUN_0214e688(param_1,iVar1);
    uVar3 = *(uint *)(*(int *)(param_1 + 4) + 0xac);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x94);
    iVar1 = jus_AllocDebug(0xb4,s_ALWidget_inl_0216bd54,s_Create_0216bd14,0x226);
    piVar4 = (int *)0x0;
    if (iVar1 != 0) {
      piVar4 = (int *)func_0x021af494(iVar1,*(undefined4 *)(param_1 + 4),uVar2,(uVar3 & 1) == 1,
                                      &LAB_02151e1c_1,0);
    }
    if (piVar4[6] == 0) {
      (**(code **)(*piVar4 + 0x14))();
    }
    iVar1 = piVar4[6];
    local_1e = 0;
    local_1a = 0x20;
    local_20 = 0;
    local_1c = 0x10;
    uVar2 = FUN_02150a40(0,&local_20,&DAT_02093c8c);
    FUN_02020e98(iVar1,uVar2);
    func_0x021b8efc(*(undefined4 *)(param_1 + 4),*(undefined4 *)(iVar1 + 4));
  }
  return;
}

