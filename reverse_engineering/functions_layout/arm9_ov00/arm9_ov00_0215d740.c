
void FUN_0215d740(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_18 = param_4;
  iVar1 = FUN_02073854();
  if ((iVar1 != 0) && (iVar1 = FUN_02073868(), iVar1 != 0)) {
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215dd68);
    iVar1 = 0;
    do {
      piVar2 = *(int **)(*(int *)(iVar3 + iVar1 * 4 + 0x5c) + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,0);
      piVar2 = *(int **)(*(int *)(iVar3 + iVar1 * 4 + 0xb8) + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    piVar2 = *(int **)(*(int *)(iVar3 + 0x48) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    if (*(int *)(iVar3 + 0xa4) != 0) {
      piVar2 = *(int **)(*(int *)(iVar3 + 0xa4) + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    }
    FUN_0214fadc(iVar3 + 0x6c);
    FUN_0214fadc(iVar3 + 200);
    local_3c = 0;
    local_38 = 0x60000;
    local_34 = 0x180000;
    FUN_02151038(auStack_24,&local_34,&local_38,&local_3c);
    iVar1 = FUN_02155b08(*(undefined4 *)(iVar3 + 0x50),0x564d5049,0);
    FUN_02013c48(*(undefined4 *)(iVar1 + 4),auStack_24,0);
    local_48 = 0;
    local_44 = 0x60000;
    local_40 = 0xfff80000;
    FUN_02151038(auStack_30,&local_40,&local_44,&local_48);
    iVar1 = FUN_02155b08(*(undefined4 *)(iVar3 + 0xac),0x564d5049,0);
    FUN_02013c48(*(undefined4 *)(iVar1 + 4),auStack_30,0);
  }
  return;
}

