
int FUN_02164140(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xb0000f;
  iVar1 = FUN_02164234();
  if (iVar1 == 0) {
    return 0xb00001;
  }
  switch(*(undefined1 *)(param_1 + 2)) {
  case 0:
    break;
  case 1:
    iVar1 = FUN_02076c98(0,*(undefined2 *)(param_1 + 4));
    iVar2 = *(char *)(iVar1 + 8) + 0xb00002;
    break;
  case 2:
    iVar2 = 0xb0000d;
    break;
  case 3:
    iVar2 = 0xb0000e;
    break;
  case 4:
    iVar2 = 0xb00010;
    break;
  case 5:
    iVar2 = 0xb0000c;
    break;
  case 6:
    iVar2 = 0xb00011;
    break;
  case 7:
    iVar2 = 0xb0000b;
    break;
  case 8:
    goto LAB_021641e8;
  case 9:
    goto LAB_021641e8;
  case 10:
LAB_021641e8:
    iVar2 = 0xb0000a;
    break;
  case 0xb:
  }
  return iVar2;
}

