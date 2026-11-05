
void FUN_02156c28(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((*(uint *)(iVar4 + 0xec) & 0x43) != 0) {
    bVar1 = true;
    iVar2 = (*(code *)(&PTR_FUN_0215413c_1_02169d3c)[*(int *)(iVar4 + 0xf8)])();
    if ((iVar2 != 0) &&
       (iVar2 = FUN_0207227c((&DAT_02169d28)[*(uint *)(iVar4 + 0xf8) & 0xff],
                             *(undefined1 *)
                              (iVar4 + *(uint *)(iVar4 + 0xf8) * 0x14 + *(int *)(iVar4 + 0xf4) +
                              0x178)), iVar2 != 0)) {
      bVar1 = false;
    }
    piVar3 = *(int **)(param_1 + 4);
    if (bVar1) {
      (**(code **)(*piVar3 + 0x148))(piVar3,8);
    }
    else {
      (**(code **)(*piVar3 + 0x14c))(piVar3,8);
    }
    *(uint *)(iVar4 + 0xec) = *(uint *)(iVar4 + 0xec) & 0xffffffbf;
  }
  return;
}

