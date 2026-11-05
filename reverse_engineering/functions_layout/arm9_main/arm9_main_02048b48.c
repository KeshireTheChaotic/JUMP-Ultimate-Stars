
void FUN_02048b48(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined1 auStack_10 [8];
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  FUN_02060e78(auStack_10);
  FUN_02060da4(auStack_10);
  iVar1 = jus_AllocDebug(0xb0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_0209c444::jus_Class_0209c444(iVar1,0);
  }
  FUN_02020c50(uVar2,0);
  iVar1 = jus_AllocDebug(0xb0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_0209c444::jus_Class_0209c444(iVar1,1);
  }
  FUN_02020c50(uVar2,1);
  iVar1 = jus_AllocDebug(0xb0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_0209c444::jus_Class_0209c444(iVar1,2);
  }
  FUN_02020c50(uVar2,2);
  iVar1 = jus_AllocDebug(0xb0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_0209c444::jus_Class_0209c444(iVar1,3);
  }
  FUN_02020c50(uVar2,3);
  FUN_02060cec(0,4,&DAT_020a1c68,5);
  FUN_020609f4(2);
  FUN_020609e4(2);
  return;
}

