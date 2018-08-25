# work_home_c_2

 

המחלקה למדעי המחשב     COMPUTER  SCIENCE DEPARTMENT

סדנה מתקדמת בתכנות 61108
סמסטר קיץ תשע"ח

תרגיל 2

מחרוזות וקבצים


1.  כתבו פונקציה שמקבלת אות קטנה letter ומחרוזת str המכילה מספר מילים (מילה היא רצף התווים שאינם רווח המופרד ממילים אחרות ע"י רווח אחד או יותר). 
על הפונקציה ליצור מערך דינאמי של מחרוזות דינאמיות כך שכל מחרוזת היא מילה המופיעה ב- str ומתחילה באות letter או באות הגדולה התואמת ל-letter (מחרוזת מס' 0 תהווה מילה ראשונה, מחרוזת מס' 1 תהווה מילה שנייה וכו', לפי סדר הופעתן ב-str).

הפונקציה תקצה בצורה מדויקת את הזיכרון הדרוש למערך ולכל אחת מהחרוזות, תחזיר את כתובת המערך, ותעביר (by reference) את גודלו. 

לדוגמא, עבור Rony Goodman got a good mark""str= ו-letter='g' הפונקציה תיצור מערך בעל שלוש מחרוזות הבאות: 
Goodman
got 
good

ניתן להניח שיש בזיכרון מספיק מקום להקצאה.



2.  כתבו פונקציה שמקבלת מחרוזת ויוצרת מחרוזת חדשה. המחרוזת החדשה תהיה  זהה למחרוזת המקורית אך לא תכלול בתוכה ספרות ורווחים. 
הפונקציה תקצה בצורה מדויקת את הזיכרון הדרוש למחרוזת החדשה ותחזיר את כתובתה. 

ניתן להניח שיש בזיכרון מספיק מקום להקצאה.

דוגמא להרצת התכנית המשתמשת בפונקציה:

 
3.  השלימו את גוף הפונקציה הבאה כך שהיא תקרא קובץ טקסט ששמו filename, ותחזיר את האות השכיחה ביותר בקובץ (האות המופיעה בקובץ הכי הרבה פעמים) מבין האותיות 'A'  עד 'Z': 

char commonestLetter(char* filename) 
      {
	
      }

יש להתייחס אל אותיות קטנות וגדולות בטקסט באותו האופן (כך שגם 'a' וגם 'A' יחשבו כאות 'A').  
על הפונקציה להחזיר את האות השכיחה בפורמט של אות גדולה.
 	
אם יתגלו מספר אותיות עם אותה שכיחות מקסימלית, על הפונקציה להחזיר את האות הגדולה ביותר לפי הסדר הלקסיקוגרפי. במידה ואין אותיות בקובץ הפונקציה תחזיר תו אפסי (‘\0’).  
דוגמא: עבור קובץ בעל התוכן
d=AB+C-a/(b+c+a+bc)
D=2-a-b
c=6+d
הפונקציה תחזיר 'C' (כל אחת מהאותיות 'A', 'B' ו-'C' מופיעות 4 פעמים אבל אות 'C' היא יותר גדולה מאותיות 'A' ו-'B').

בתכנית הבדיקה צריך ליצור באמצעות פונקציית עזר את קובץ הקלט לפני הקריאה לפונקציה commonestLetter (ניתן לקרוא לקובץ input.txt). תוכן הקובץ ייקלט במהלך הריצה.

ההרצה האפשרית של התכנית שמשתמשת בפונקציה תתבצע באופן הבא:

  char ch;
  …
  ch=commonestLetter("input.txt");
  if (ch)	printf("The commonest letter is %c", ch);
  else		printf("No letters in the file");



4  .כתבו פונקציית פענוח המקבלת מחרוזת אשר מכילה טקסט מוצפן. 
על הפונקציה לפענח את הטקסט לפי השיטה הבאה:
בכל מילה, יש להחסיר 1 מהתו הראשון ,יש להחסיר 2 מהתו השני וכו'. את הרווחים יש להשאיר במקומם.

הפונקציה תחליף את התוכן המקורי של המחרוזת בתוכן החדש (שמהווה את הטקסט המפוענח). 

לדוגמא, המחרוזת  "bc8 d"  תוחלף ב- "aa5 c".

אין צורך בקלט המחרוזת המקורית בתכנית הבדיקה.
יש לבחון את הפונקציה עבור הטקסט המוצפן הבא:
  
"Btwlzx Dqqes Eq|pj2 Tjhvqujs Iqoqjy bpg Eqfxtx Xcwwtt"
5 .כתבו פונקציה המקבלת את שתי המחרוזת: declaration ו-filename.
המחרוזת declaration תיישם שורת הכרזות פשוטות של משתנים בשפת C.
על הפונקציה לחשב את כמות הזיכרון שיש להקצות עבור כל משתנה מ-declaration ולשמור את התוצאות בקובץ טקסט לרישום דו"ח ששמו הוא תוכן המחרוזת filename. 

למשל, ההרצה הבאה מדגימה את פלט הפונקציה לקובץ (באדום) עבור שתי מחרוזות declaration אפשריות (שורות קלט התכנית):


int x, y;   

x requires 4 bytes
y requires 4 bytes


char c, *cptr, carray[80]; 

c requires 1 byte
cptr requires 4 bytes
carray requires 80 bytes


המחרוזת declaration אשר תתקבל על-ידי הפונקציה צריכה להכיל
- אחד משבעת טיפוסי הנתונים הבאים:
 char, short, int, long, long long, float, double.
- הכרזה אחת או יותר של משתנים לא מאותחלים (אשר יכולים להיות גם מצביעים ומערכים חד-ממדיים אבל לא מערכים דו-ממדיים, לא מערכי מצביעים ולא מצביעים למצביעים) מופרדים עם פסיקים.  
- נקודה פסיק לציון סוף שורה.
- רווחים ללא הגבלה במקומות המתאימים (כמו בשורת הכרזות אמיתית).

ניתן להניח ששורת קלט התוכנית (ולכן, גם המחרוזת declaration) היא תקינה.

בתכנית הבדיקה יש להציג במסך את התוכן של הקובץ הנוצר באמצאות פונקציית עזר. 




1.	יש לאחד את כל השאלות הנ"ל לתכנית אחת באמצעות תפריט הפונקציות המשמשות להפעלת פונקציות השאלות 1-5 ומטפלות בהכנת ובקליטת הנתונים, בהדפסת התוצאות, בשחרר זיכרון דינאמי וכו'. 
2.	לכל המחרוזות המקוריות אפשר להשתמש במערכים סטטיים בעלי גדלים מספיק גדולים. ניתן להניח שיש בכל אחד מהמערכים מספיק מקום לקלט מחרוזת. 
3.	יש להציג במסך את כל התוצאות (בשאלות 1 ו-5 להשתמש בפונקציות עזר). 
4.	יש להשתמש בשמות משמעותיים וגם בהערות.
5.	יש להקפיד לכתוב בצורה מבנית.
6.	יש להקפיד על שימוש בממשק ידידותי ככל האפשר. אין צורך בבדיקת תקינות הקלט.
7.	התכנית שלא עוברת קומפילציה לא תתקבל! 
