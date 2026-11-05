
void FUN_021575bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  
  if ((*(uint *)(*(int *)(param_1 + 4) + 0xac) & 1) == 0) {
    uStack_18 = param_4;
    FUN_021502ec(auStack_20,0x93,0,0xa3,0x60);
    uVar1 = FUN_0214f3bc(0,auStack_20,&DAT_02093c8c);
    FUN_02020e98(param_1,uVar1);
    iVar2 = FUN_0203b404();
    iVar2 = FUN_021510f0(*(undefined4 *)(iVar2 + 0x88),0x8e0000,5,0x60);
    local_28 = 0xb000;
    local_24 = 0x9b000;
    FUN_0214f218(iVar2,&local_24,&local_28);
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
    FUN_0214f48c(param_1,iVar2);
    iVar2 = FUN_0203b404();
    iVar2 = FUN_021510f0(*(undefined4 *)(iVar2 + 0x88),0x8e0000,9,0x60);
    local_30 = 0x55000;
    local_2c = 0x9b000;
    FUN_0214f218(iVar2,&local_2c,&local_30);
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
    FUN_0214f48c(param_1,iVar2);
    uVar3 = *(uint *)(*(int *)(param_1 + 4) + 0xac);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x94);
    iVar2 = thunk_FUN_0201a228(0xb4,s_ALWidget_inl_021699b4,s_Create_02169e94,0x226);
    piVar4 = (int *)0x0;
    if (iVar2 != 0) {
      piVar4 = (int *)func_0x021af494(iVar2,*(undefined4 *)(param_1 + 4),uVar1,(uVar3 & 1) == 1,
                                      &LAB_021576fc_1,0);
    }
    if (piVar4[6] == 0) {
      (**(code **)(*piVar4 + 0x14))();
    }
    iVar2 = piVar4[6];
    FUN_021502ec(auStack_38,0x93,0,0xa3,0x20);
    uVar1 = FUN_0214f3bc(0,auStack_38,&DAT_02093c8c);
    FUN_02020e98(iVar2,uVar1);
    func_0x021b8efc(*(undefined4 *)(param_1 + 4),*(undefined4 *)(iVar2 + 4));
  }
  return;
}

