
void FUN_021581a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  iVar1 = FUN_0214d47c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x90));
  local_38[4] = 0xc000;
  local_38[5] = (((int)*(short *)(*(int *)(iVar1 + 4) + 0xcc) -
                 *(int *)(*(int *)(param_1 + 4) + 0x94)) + 9) * 0x1000;
  FUN_0214e990(param_1,local_38 + 5,local_38 + 4);
  *(int *)(*(int *)(param_1 + 4) + 0x98) = *(int *)(*(int *)(param_1 + 4) + 0x98) + -0x10;
  *(code **)(*(int *)(param_1 + 4) + 0xb4) = FUN_0215848c;
  if ((*(uint *)(*(int *)(param_1 + 4) + 0xac) & 1) == 0) {
    local_20 = 0;
    local_1e = 0;
    local_1c = (undefined2)*(undefined4 *)(*(int *)(param_1 + 4) + 0x94);
    local_1a = (undefined2)*(undefined4 *)(*(int *)(param_1 + 4) + 0x98);
    uVar2 = FUN_0214e81c(0,&local_20,&DAT_02093c8c);
    FUN_02020e98(param_1,uVar2);
    iVar1 = FUN_0203b3f4();
    iVar1 = FUN_0214d4a4(*(undefined4 *)(iVar1 + 0x88),0x851000,5,0x20);
    local_38[2] = 0xa000;
    local_38[3] = 0x8000;
    FUN_0214e990(iVar1,local_38 + 3,local_38 + 2);
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    FUN_0214e908(param_1,iVar1);
    iVar1 = FUN_0203b3f4();
    iVar1 = FUN_0214d4a4(*(undefined4 *)(iVar1 + 0x88),0x851000,9,0x20);
    local_38[1] = 0x8000;
    local_38[0] = (*(int *)(*(int *)(param_1 + 4) + 0x98) + -10) * 0x1000;
    FUN_0214e990(iVar1,local_38 + 1,local_38);
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    FUN_0214e908(param_1,iVar1);
    uVar3 = *(uint *)(*(int *)(param_1 + 4) + 0xac);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x94);
    iVar1 = thunk_FUN_0201a228(0xb4,FUN_0215e540,s_Create_0215e408,0x226);
    piVar4 = (int *)0x0;
    if (iVar1 != 0) {
      piVar4 = (int *)func_0x021af494(iVar1,*(undefined4 *)(param_1 + 4),uVar2,(uVar3 & 1) == 1,
                                      FUN_021583f8,0);
    }
    if (piVar4[6] == 0) {
      (**(code **)(*piVar4 + 0x14))();
    }
    iVar1 = piVar4[6];
    local_20 = 0;
    local_1e = 0;
    local_1c = 0x10;
    local_1a = 0x20;
    uVar2 = FUN_0214e81c(0,&local_20,&DAT_02093c8c);
    FUN_02020e98(iVar1,uVar2);
    func_0x021b8efc(*(undefined4 *)(param_1 + 4),*(undefined4 *)(iVar1 + 4));
  }
  return;
}

