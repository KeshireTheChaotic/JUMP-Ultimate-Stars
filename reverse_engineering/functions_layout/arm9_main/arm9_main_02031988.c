
void FUN_02031988(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 uStack_c;
  
  DAT_020a0c3a = 1;
  uStack_c = param_4;
  DAT_020a0e04 = param_1;
  puVar1 = (undefined4 *)FUN_0201a418(DAT_020a0dd8,0,0x410);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_02093eb4::jus_Class_02093eb4();
    *puVar1 = &jus_Class_02093e84::vftable;
  }
  DAT_020a0cec = puVar1;
  if (DAT_020a0e04 != 0) {
    iVar2 = FUN_0201a228(8);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = ScreenInstance::ScreenInstance();
    }
    DAT_020a0ce0 = *(int **)(iVar3 + 4);
    (**(code **)(*DAT_020a0ce0 + 0x24))(DAT_020a0ce0,1);
    (**(code **)(*DAT_020a0ce0 + 0x20))(DAT_020a0ce0,1);
    local_10 = 0xf0000;
    (**(code **)(*DAT_020a0ce0 + 0x10))(DAT_020a0ce0,&local_10);
    DAT_020a0dd0 = DAT_020a0ce0;
  }
  return;
}

