
void FUN_027f58d4(void)

{
  uint local_10 [2];
  
  do {
    while( true ) {
      FUN_027f66a4(local_10);
      if ((local_10[0] & 0x20) == 0) break;
      FUN_027f5ecc();
    }
  } while ((local_10[0] & 1) != 0);
  return;
}

