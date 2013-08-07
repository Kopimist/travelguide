#import <UIKit/UIKit.h>

@protocol ArticleDelegate <NSObject>
-(void)selectHtmlPageUrl:(NSString *)url;
@end

@interface ArticleVC : UITableViewController <UISearchBarDelegate, UITableViewDelegate>
@property (nonatomic, assign) id <ArticleDelegate> delegate;
//uses on start of application
-(NSString *)getDefaultArticle;
@end
