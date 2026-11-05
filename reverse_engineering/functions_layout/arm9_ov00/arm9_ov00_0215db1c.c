
void FUN_0215db1c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02073868();
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      piVar2 = *(int **)(*(int *)(iVar3 + iVar1 * 4 + 0xb8) + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,0);
      piVar2 = *(int **)(*(int *)(iVar3 + iVar1 * 4 + 0x170) + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    piVar2 = *(int **)(*(int *)(iVar3 + 0xa4) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    piVar2 = *(int **)(*(int *)(iVar3 + 0x15c) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    FUN_0214fadc(iVar3 + 200);
    FUN_0214fadc(iVar3 + 0x180);
    local_54 = 0;
    local_50 = 0x60000;
    local_4c = 0xfff80000;
    FUN_02151038(auStack_24,&local_4c,&local_50,&local_54);
    iVar1 = FUN_02155b08(*(undefined4 *)(iVar3 + 0xac),0x564d5049,0);
    FUN_02013c48(*(undefined4 *)(iVar1 + 4),auStack_24,0);
    local_60 = 0;
    local_5c = 0x60000;
    local_58 = 0xfff80000;
    FUN_02151038(auStack_30,&local_58,&local_5c,&local_60);
    iVar1 = FUN_02155b08(*(undefined4 *)(iVar3 + 0x164),0x564d5049,0);
    FUN_02013c48(*(undefined4 *)(iVar1 + 4),auStack_30,0);
    if (*(byte *)(iVar3 + 0x1b4) < *(byte *)(iVar3 + 0x1b5)) {
      FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215df38);
    }
    else {
      FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215ce88);
      local_64 = 0xfff80000;
      FUN_0215dafc(*(undefined4 *)(iVar3 + 0x50),&local_64);
      local_68 = 0xfff80000;
      FUN_0215dafc(*(undefined4 *)(iVar3 + 0x108),&local_68);
      local_74 = 0;
      local_70 = 0x60000;
      local_6c = 0x80000;
      FUN_02151038(auStack_3c,&local_6c,&local_70,&local_74);
      iVar1 = FUN_02155b08(*(undefined4 *)(iVar3 + 0x50),0x564d5049,0);
      FUN_02013c48(*(undefined4 *)(iVar1 + 4),auStack_3c,0);
      local_80 = 0;
      local_7c = 0x60000;
      local_78 = 0x80000;
      FUN_02151038(auStack_48,&local_78,&local_7c,&local_80);
      iVar1 = FUN_02155b08(*(undefined4 *)(iVar3 + 0x108),0x564d5049,0);
      FUN_02013c48(*(undefined4 *)(iVar1 + 4),auStack_48,0);
    }
  }
  return;
}

