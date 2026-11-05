
void FUN_0215dd68(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [12];
  undefined4 uStack_10;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  uStack_10 = param_4;
  iVar1 = FUN_02155b08(puVar2[0x14],0x564d5049,0);
  iVar1 = (**(code **)(**(int **)(iVar1 + 4) + 0x68))();
  if (iVar1 != 0) {
    if (*(byte *)(puVar2 + 0x6d) < *(byte *)((int)puVar2 + 0x1b5)) {
      FUN_0214ec4c(*puVar2,1);
      FUN_020282f4(*(undefined4 *)(param_1 + 4));
    }
    else {
      FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215cdb8);
      local_2c = 0xfff80000;
      FUN_0215dafc(puVar2[0x14],&local_2c);
      local_30 = 0x180000;
      FUN_0215dafc(puVar2[0x2b],&local_30);
      local_3c = 0;
      local_38 = 0x60000;
      local_34 = 0x80000;
      FUN_02151038(auStack_1c,&local_34,&local_38,&local_3c);
      iVar1 = FUN_02155b08(puVar2[0x14],0x564d5049,0);
      FUN_02013c48(*(undefined4 *)(iVar1 + 4),auStack_1c,0);
      local_48 = 0;
      local_44 = 0x60000;
      local_40 = 0x80000;
      FUN_02151038(auStack_28,&local_40,&local_44,&local_48);
      iVar1 = FUN_02155b08(puVar2[0x2b],0x564d5049,0);
      FUN_02013c48(*(undefined4 *)(iVar1 + 4),auStack_28,0);
      FUN_0215cb48(puVar2 + 0x11);
      FUN_0215cb48(puVar2 + 0x28);
      (*DAT_020a0e18)();
      (*DAT_020a0e18)();
      iVar1 = FUN_0203b424(3);
      uVar3 = *(undefined4 *)(iVar1 + 0x88);
      iVar1 = FUN_0203b3e4();
      FUN_0215c628(puVar2,puVar2 + 0x11,0,*(undefined4 *)(iVar1 + 0x88),uVar3,1);
      iVar1 = FUN_0203b414(3);
      uVar3 = *(undefined4 *)(iVar1 + 0x88);
      iVar1 = FUN_0203b3f4();
      FUN_0215c628(puVar2,puVar2 + 0x28,1,*(undefined4 *)(iVar1 + 0x88),uVar3,0);
    }
  }
  return;
}

