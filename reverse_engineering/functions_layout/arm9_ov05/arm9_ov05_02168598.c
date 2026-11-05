
bool FUN_02168598(int param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = true;
  switch(param_2) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    bVar1 = *(char *)(param_1 + 0x59) != '\0';
    break;
  case 3:
    bVar1 = *(char *)(param_1 + 0x58) != '\0';
    break;
  case 4:
    if (*(char *)(param_1 + 0x5a) == '\0') {
      bVar1 = false;
    }
    break;
  case 5:
  }
  return bVar1;
}

