
void FUN_02194fc8(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 8;
  do {
    param_1 = param_1 + -1;
    cVar1 = *param_1;
    *param_1 = cVar1 + '\x01';
    if ((char)(cVar1 + '\x01') != '\0') {
      return;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

