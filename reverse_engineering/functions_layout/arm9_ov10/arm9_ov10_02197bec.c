
undefined4 FUN_02197bec(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + (param_2 + -1) * 2) & 0x8000) != 0) {
    return 0xffffffff;
  }
  iVar1 = thunk_FUN_02197c28();
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

