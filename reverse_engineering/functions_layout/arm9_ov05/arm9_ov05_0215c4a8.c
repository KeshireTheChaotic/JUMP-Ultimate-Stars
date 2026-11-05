
void FUN_0215c4a8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = *(undefined4 *)(param_1 + iVar2 * 4 + 0x1fc);
    if (iVar2 == param_2) {
      FUN_0215b740(uVar1,0);
    }
    else {
      FUN_0206af68(uVar1,0,0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}

