
void FUN_02151310(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_18 = param_4;
  iVar1 = (*(code *)(&PTR_FUN_02151474_1_02171c38)[*(char *)(iVar2 + 0x38)])(iVar2);
  if (iVar1 != 0) {
    *(undefined4 *)(*(int *)(DAT_02172960 + 0x118) + 0x578) = 0;
    *(undefined1 *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(*(int *)(DAT_02172960 + 0xdc) + 0xc0) = 0;
    *(undefined1 *)(*(int *)(DAT_02172960 + 0xdc) + 0xde) = 0;
    iVar1 = *(int *)(iVar2 + 0x14);
    local_1c = 0x60000;
    local_20 = 0x40000;
    FUN_021519d0(iVar1,&local_20,&local_1c);
    FUN_02023894(*(undefined4 *)(iVar1 + 4),0x6a0001,0);
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
    FUN_02028330(*(undefined4 *)(iVar1 + 4));
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    FUN_02028384(*(undefined4 *)(iVar1 + 4),0x2151bb5);
    (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),iVar2);
    *(undefined1 *)(iVar2 + 0x37) = 0;
    FUN_0207342c(0x7a,1);
    FUN_0206bc30(*(undefined4 *)(iVar2 + 0x2c));
    FUN_020783cc(*(undefined4 *)(*(int *)(DAT_02172960 + 0xdc) + 0x1b4),0x4000);
    FUN_020783cc(*(undefined4 *)(*(int *)(DAT_02172960 + 0xe0) + 0x1b4),0x4000);
    if (*(char *)(DAT_02172960 + 0x16e) != '\0') {
      for (iVar1 = 1; iVar1 < *(int *)(DAT_02172960 + 0x158); iVar1 = iVar1 + 1) {
        iVar2 = iVar1 * 4;
        func_0x0217319c(*(undefined4 *)(DAT_02172960 + iVar2 + 300),3);
        func_0x021731f0(*(undefined4 *)(DAT_02172960 + iVar2 + 300),0);
        func_0x0217329c(*(undefined4 *)(DAT_02172960 + iVar2 + 300),0xffffffff,1);
      }
    }
  }
  FUN_020781e4(*(undefined4 *)(*(int *)(DAT_02172960 + 0xdc) + 0x1b4),0x100);
  return;
}

