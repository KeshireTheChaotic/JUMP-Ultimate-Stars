
void FUN_021569b0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = (*(int **)(param_1 + 4))[4];
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
  if ((1 < uVar1) && ((*(uint *)(iVar5 + 0xec) & 2) != 0)) {
    iVar2 = (*(code *)(&PTR_FUN_0215413c_1_02169d3c)[*(int *)(iVar5 + 0xf8)])();
    iVar5 = FUN_02156fa0(*(uint *)(iVar5 + 0xf8) & 0xff,
                         *(undefined1 *)
                          (iVar5 + *(uint *)(iVar5 + 0xf8) * 0x14 +
                           *(int *)(*(int *)(param_1 + 4) + 0x124) + 0x178));
    iVar3 = FUN_0203b404();
    FUN_0214f7f8(*(undefined4 *)(iVar3 + 0x88));
    iVar3 = FUN_021519b4(param_1,1);
    FUN_02023894(*(undefined4 *)(iVar3 + 4),(byte)s_________02169d2c[iVar5] + 0x850000,0);
    (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
    piVar4 = *(int **)(iVar3 + 4);
    if (iVar2 == 0) {
      (**(code **)(*piVar4 + 0xd8))(piVar4,0);
    }
    else {
      (**(code **)(*piVar4 + 0xd8))(piVar4,1);
    }
    FUN_0214f834();
  }
  return;
}

