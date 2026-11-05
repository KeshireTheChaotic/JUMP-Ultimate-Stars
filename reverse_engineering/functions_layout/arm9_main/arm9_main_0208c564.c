
bool FUN_0208c564(void)

{
  char cVar1;
  
  cVar1 = *pcRam0208c584;
  if (cVar1 != '\0') {
    *pcRam0208c584 = '\0';
  }
  return cVar1 != '\0';
}

