
int FUN_021c7880(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = jus_AllocDebug(param_2 << 3);
  if (iVar1 == 0) {
    FUN_02003bd8(s_Memory_allocation_failure_021d4664);
    FUN_02001f18();
  }
  return iVar1;
}

