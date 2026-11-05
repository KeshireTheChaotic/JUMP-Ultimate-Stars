
undefined4 FUN_021656b8(void)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(DAT_0216e82c + 0xa90);
  cVar1 = *pcVar2;
  if ((((cVar1 == '\x01') || (cVar1 == '\x14')) || (cVar1 == '\x17')) ||
     ((cVar1 == '\x1a' || (cVar1 == '\x1d')))) {
    *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x22;
    *(undefined1 *)(DAT_0216e82c + 0xaac) = 0;
    return 1;
  }
  if (((cVar1 == '\x04') || ((cVar1 == '\x05' || (cVar1 == '\x06')))) || (cVar1 == '\r')) {
    if ((cVar1 == '\x04') && (*(uint *)(DAT_0216e82c + 0xa98) < 6)) {
      return 0;
    }
    func_0x021bfe80();
    *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x10;
    *(undefined1 *)(DAT_0216e82c + 0xaac) = 2;
    return 1;
  }
  if ((byte)(cVar1 - 9U) < 2) {
    *pcVar2 = ' ';
    return 1;
  }
  if (cVar1 == '\f') {
    *pcVar2 = '\"';
    return 1;
  }
  if (cVar1 == '\x02') {
    return 0;
  }
  return 0;
}

