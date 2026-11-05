
void FUN_021a2234(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined1 *)(param_2 + iVar1) = *(undefined1 *)(param_1 + iVar1 + 0x48);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}

