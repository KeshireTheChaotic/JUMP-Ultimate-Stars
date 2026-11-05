
int FUN_02025a40(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  iVar1 = 0;
  do {
    if (puVar2[2] == 0) {
      return -1;
    }
    for (uVar3 = 0; uVar3 < (uint)puVar2[2]; uVar3 = uVar3 + 1) {
      if (puVar2[uVar3 + 3] == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

