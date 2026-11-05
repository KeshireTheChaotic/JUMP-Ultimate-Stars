
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_02059b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = FUN_02058060();
  iVar2 = FUN_02057f40(1,0xb);
  if (iVar2 != 0) {
    return iVar2;
  }
  DC_InvalidateRange(*(int *)(iVar1 + 4) + 0x10,4);
  if (*(int *)(*(int *)(iVar1 + 4) + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x02059be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(3);
    return iVar1;
  }
  if (0x5e4 < param_4) {
    return 6;
  }
  DC_StoreRange(param_3,param_4);
  FUN_02058214(0x12,param_1);
  FUN_02051890(param_2,&uStack_20,6);
  iVar1 = FUN_020580e8(0x12,4,uStack_20,uStack_1c);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  return iVar1;
}

