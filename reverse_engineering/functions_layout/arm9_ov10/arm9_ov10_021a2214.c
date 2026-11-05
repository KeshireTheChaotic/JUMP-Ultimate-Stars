
void FUN_021a2214(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    puVar1 = (undefined1 *)(param_2 + iVar3);
    iVar2 = param_1 + iVar3;
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar2 + 0x48) = *puVar1;
  } while (iVar3 < 4);
  return;
}

